//Display adress and value of a pointer veriable
#include <stdio.h>

int main() {
    int ver = 10;       
    int *ptr;         

    ptr = &ver;          

    printf("Value of ver: %d\n", ver);
    printf("Address of ver: %p\n", &ver);

    return 0;
}

