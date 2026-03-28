#include <stdio.h>

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even or odd
    if(num % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}