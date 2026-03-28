#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char tasks[MAX][100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- TO-DO LIST ---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // buffer clear

        if (choice == 3) {
            printf("Exiting...\n");
            break;
        }

        switch (choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter task: ");
                    fgets(tasks[count], 100, stdin);
                    count++;
                    printf("Task added!\n");
                } else {
                    printf("Task list full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No tasks available!\n");
                } else {
                    printf("\nYour Tasks:\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d. %s", i + 1, tasks[i]);
                    }
                }
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}