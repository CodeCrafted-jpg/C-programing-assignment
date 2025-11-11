//create a simple phone record application that will capture input like phone number name and search menu;

#include <stdio.h>
#include <string.h>

#define MAX 100  

struct PhoneRecord {
    char name[50];
    char phone[20];
};

int main() {
    struct PhoneRecord records[MAX];
    int count = 0; 
    int choice;
    char searchName[50];
    int found;

    do {
        printf("\n--- Phone Record Application ---\n");
        printf("1. Add New Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Record by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                if (count < MAX) {
                    printf("\nEnter Name: ");
                    fgets(records[count].name, sizeof(records[count].name), stdin);
                    records[count].name[strcspn(records[count].name, "\n")] = 0;

                    printf("Enter Phone Number: ");
                    fgets(records[count].phone, sizeof(records[count].phone), stdin);
                    records[count].phone[strcspn(records[count].phone, "\n")] = 0;

                    count++;
                    printf("Record added successfully!\n");
                } else {
                    printf("Record list is full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo records found!\n");
                } else {
                    printf("\n--- All Phone Records ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d. Name: %s, Phone: %s\n", i + 1, records[i].name, records[i].phone);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("\nNo records to search!\n");
                } else {
                    printf("\nEnter name to search: ");
                    fgets(searchName, sizeof(searchName), stdin);
                    searchName[strcspn(searchName, "\n")] = 0;

                    found = 0;
                    for (int i = 0; i < count; i++) {
                        if (strcmp(records[i].name, searchName) == 0) {
                            printf("\nRecord found!\n");
                            printf("Name: %s\n", records[i].name);
                            printf("Phone: %s\n", records[i].phone);
                            found = 1;
                            break;
                        }
                    }
                    if (!found)
                        printf("Record not found!\n");
                }
                break;

            case 4:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
