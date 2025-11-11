#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void encryptText(char *text, int key, char *result) {
    int len = strlen(text);
    for (int i = 0; i < len; i++) {
     
        result[i] = text[i] + key + (i % 5);
    }
    result[len] = '\0';
}

void decryptText(char *text, int key, char *result) {
    int len = strlen(text);
    for (int i = 0; i < len; i++) {
        result[i] = text[i] - key - (i % 5);
    }
    result[len] = '\0';
}

int main() {
    char text[1000], processed[1000], restored[1000];
    int choice, key, enteredKey;
    FILE *file;
    srand(time(0));
   
    printf("1. Encrypt Text (Jumble)\n");
    printf("2. Decrypt Text (Dejumble)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); 
    if (choice == 1) {
        printf("\nEnter text to encrypt:\n> ");
        fgets(text, sizeof(text), stdin);
        text[strcspn(text, "\n")] = '\0';

        key = rand() % 50 + 1; 
        encryptText(text, key, processed);

        printf("\n Encrypted Text:\n%s\n", processed);
        printf(" Secret Key: %d\n", key);

      
        file = fopen("encrypted.txt", "w");
        if (file == NULL) {
            printf(" Error saving to file.\n");
            return 1;
        }
        fprintf(file, "%s\n%d", processed, key);
        fclose(file);
        printf("\n Encrypted text and key saved to 'encrypted.txt'\n");

    } else if (choice == 2) {
        file = fopen("encrypted.txt", "r");
        if (file == NULL) {
            printf(" No 'encrypted.txt' found. Encrypt something first.\n");
            return 1;
        }

        fscanf(file, "%[^\n]\n%d", text, &key);
        fclose(file);
        printf("\n A file with encrypted text found.\n");
        printf("Encrypted content:\n%s\n", text);

        printf("\nEnter secret key to decrypt: ");
        scanf("%d", &enteredKey);

        if (enteredKey == key) {
            decryptText(text, enteredKey, restored);
            printf("\n Correct key! Original message:\n%s\n", restored);
        } else {
            printf("\n Wrong key! Access denied.\n");
        }

    } else {
        printf(" Invalid choice.\n");
    }

    printf("Program finished. Stay secure!\n");
   

    return 0;
}
