#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char names[MAX][50];
    char phones[MAX][15];
    int count = 0, choice;

    while (1) {
        printf("\n--- CONTACT LIST ---\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 3) break;

        switch (choice) {
            case 1:
                printf("Enter name: ");
                fgets(names[count], 50, stdin);

                printf("Enter phone: ");
                fgets(phones[count], 15, stdin);

                count++;
                printf("Contact added!\n");
                break;

            case 2:
                for (int i = 0; i < count; i++) {
                    printf("%d. %s - %s", i+1, names[i], phones[i]);
                }
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}