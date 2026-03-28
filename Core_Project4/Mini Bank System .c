#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;

    printf("Create Account\n");
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Name: ");
    scanf("%s", acc.name);

    acc.balance = 0;

    while (1) {
        printf("\n--- BANK MENU ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Thank you!\n");
            break;
        }

        switch (choice) {

            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Deposited successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > acc.balance)
                    printf("Insufficient balance!\n");
                else {
                    acc.balance -= amount;
                    printf("Withdraw successful!\n");
                }
                break;

            case 3:
                printf("Account No: %d\n", acc.accNo);
                printf("Name: %s\n", acc.name);
                printf("Balance: %.2f\n", acc.balance);
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}