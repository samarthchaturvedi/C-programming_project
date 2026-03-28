#include <stdio.h>

// Function to check even or odd
void check(int n) {
    if(n % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    check(n);

    return 0;
}