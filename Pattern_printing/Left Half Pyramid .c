#include <stdio.h>

int main() {
    int n;

    printf("Enter rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        // spaces
        for(int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // stars
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}