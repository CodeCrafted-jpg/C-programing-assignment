//  Library Book Inventory System (Array + Pointer Arithmetic)
// Features:
// • Store book IDs in a 1D array
// • Add / delete / search books (linear search)
// • Show available books
// • Use pointers to access array elements
// Real use: Simple library stock tracking.

#include <stdio.h>
#define MAX 100
int search(int *arr, int n, int key) {
    for(int i = 0; i < n; i++) {
      if(*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}
void show(int *arr, int n) {
    if(n == 0) {
        printf("No books available.\n");
        return;
    }
  printf("Books in library (IDs):\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int books[MAX];
    int count = 0, choice, id, pos;

    while(1) {
        printf("\nLibrary Menu \n");
        printf("1. Add book\n");
        printf("2. Delete book\n");
        printf("3. Search book\n");
        printf("4. Show all books\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if(choice == 1) {
            if(count == MAX) {
                printf("Inventory full. Cannot add more books (Max: %d).\n", MAX);
                continue;
            }
            printf("Enter book ID: ");
            if (scanf("%d", &id) != 1) {
                printf("Invalid ID input.\n");
                while (getchar() != '\n');
                continue;
            }
            *(books + count) = id;
            count++;
            printf("Book ID %d added successfully.\n", id);
        }

        else if(choice == 2) {
            if (count == 0) {
                printf("No books in the inventory to delete.\n");
                continue;
            }
            
            printf("Enter book ID to delete: ");
            if (scanf("%d", &id) != 1) {
                printf("Invalid ID input.\n");
                while (getchar() != '\n');
                continue;
            }
            pos = search(books, count, id);

            if(pos == -1) {
                printf("Book with ID %d not found.\n", id);
            } else {
                for(int i = pos; i < count - 1; i++) {
                    *(books + i) = *(books + i + 1);
                }
                count--;
                printf("Book with ID %d deleted successfully.\n", id);
            }
        }

        else if(choice == 3) {
            printf("Enter book ID to search: ");
            if (scanf("%d", &id) != 1) {
                printf("Invalid ID input.\n");
                while (getchar() != '\n');
                continue;
            }

            pos = search(books, count, id);

            if(pos == -1)
                printf("Book with ID %d not found.\n", id);
            else
                printf("Book with ID %d found at position %d.\n", id, pos + 1);
        }
            else if(choice == 4) {
          show(books, count);
        }
           else if(choice == 5) {
           printf("Exiting Library Management System. Goodbye!\n");
            break;
        }

        else {
           printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}