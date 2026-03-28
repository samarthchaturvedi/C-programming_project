#include <stdio.h>

// Function to calculate power
int power(int base, int exp) {
    int result = 1;

    for(int i = 1; i <= exp; i++)
        result *= base;

    return result;
}

int main() {
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("Result = %d\n", power(base, exp));

    return 0;
}