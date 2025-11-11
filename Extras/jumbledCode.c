#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void encryptBytes(const unsigned char *plain, int len, int key, unsigned char *out) {
    for (int i = 0; i < len; ++i) {
        out[i] = (unsigned char)(plain[i] + key + (i % 5));
    }
}


void decryptBytes(const unsigned char *enc, int len, int key, unsigned char *out) {
    for (int i = 0; i < len; ++i) {
        out[i] = (unsigned char)(enc[i] - key - (i % 5));
    }
}


void bytesToHex(const unsigned char *bytes, int len, char *out) {
    const char *hex = "0123456789ABCDEF";
    for (int i = 0; i < len; ++i) {
        unsigned char b = bytes[i];
        out[2*i]     = hex[(b >> 4) & 0xF];
        out[2*i + 1] = hex[b & 0xF];
    }
    out[2*len] = '\0';
}


int hexToBytes(const char *hexStr, unsigned char *out) {
    int hlen = strlen(hexStr);
    if (hlen % 2 != 0) return -1;
    for (int i = 0; i < hlen/2; ++i) {
        char a = hexStr[2*i], b = hexStr[2*i+1];
        if (!isxdigit(a) || !isxdigit(b)) return -1;
        unsigned char hi = (unsigned char)(isdigit(a) ? a - '0' : toupper(a) - 'A' + 10);
        unsigned char lo = (unsigned char)(isdigit(b) ? b - '0' : toupper(b) - 'A' + 10);
        out[i] = (unsigned char)((hi << 4) | lo);
    }
    return hlen/2;
}

int main() {
    char input[1000];
    char choiceBuf[8];
    int choice;
    srand((unsigned)time(NULL));

    printf("1. Encrypt Text (Jumble)\n");
    printf("2. Decrypt Text (Auto)\n");
    printf("Enter your choice: ");
    if (!fgets(choiceBuf, sizeof(choiceBuf), stdin)) return 0;
    choice = atoi(choiceBuf);

    if (choice == 1) {
        printf("\nEnter text to encrypt:\n> ");
        if (!fgets(input, sizeof(input), stdin)) return 0;
        input[strcspn(input, "\n")] = '\0';

        int len = (int)strlen(input);
        int key = rand() % 50 + 1; 

       
        unsigned char *encBytes = malloc(len ? len : 1);
        if (!encBytes) { printf("Memory error\n"); return 1; }
        encryptBytes((unsigned char*)input, len, key, encBytes);

        
        char *hexOut = malloc(2 * (len ? len : 1) + 1 + 1 + 2 + 1);
        if (!hexOut) { free(encBytes); printf("Memory error\n"); return 1; }
        bytesToHex(encBytes, len, hexOut);

       
        char keyMarker[4];
        sprintf(keyMarker, "|%02X", key); 
        strcat(hexOut, keyMarker);

        printf("\n Encrypted (HEX) Text (copy this):\n%s\n", hexOut);
        printf("(Key is hidden inside after '|', not shown separately.)\n");

        free(encBytes);
        free(hexOut);
    }
    else if (choice == 2) {
        printf("\nEnter encrypted (HEX) text (paste the whole string you got):\n> ");
        if (!fgets(input, sizeof(input), stdin)) return 0;
        input[strcspn(input, "\n")] = '\0';

        
        char *delim = strrchr(input, '|');
        if (!delim || (int)strlen(delim) < 3) {
            printf("\nInvalid encrypted format. Expected 'HEXDATA|KK' where KK is key in hex.\n");
            return 1;
        }

       
        int key;
        if (sscanf(delim + 1, "%2x", &key) != 1) {
            printf("\n Unable to parse key marker.\n");
            return 1;
        }

        
        *delim = '\0';
        const char *dataHex = input;
        int dataHexLen = (int)strlen(dataHex);
        if (dataHexLen % 2 != 0) {
            printf("\n Corrupted data hex length.\n");
            return 1;
        }

        int dataBytesLen = dataHexLen / 2;
        unsigned char *encBytes = malloc(dataBytesLen ? dataBytesLen : 1);
        if (!encBytes) { printf("Memory error\n"); return 1; }

        if (hexToBytes(dataHex, encBytes) != dataBytesLen) {
            free(encBytes);
            printf("\n Failed to convert hex to bytes (corrupted hex).\n");
            return 1;
        }

        unsigned char *plain = malloc(dataBytesLen ? dataBytesLen : 1);
        if (!plain) { free(encBytes); printf("Memory error\n"); return 1; }

        decryptBytes(encBytes, dataBytesLen, key, plain);

        
        char *outStr = malloc(dataBytesLen + 1);
        if (!outStr) { free(encBytes); free(plain); printf("Memory error\n"); return 1; }
        memcpy(outStr, plain, dataBytesLen);
        outStr[dataBytesLen] = '\0';

        printf("\nDecrypted (Original) Text:\n%s\n", outStr);

        free(encBytes); free(plain); free(outStr);
    } else {
        printf("Invalid choice.\n");
    }

    printf("\nProgram finished. Stay secure!\n");
    return 0;
}
