#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input N
    printf("Enter N: ");
    scanf("%d", &n);

    // Calculate sum
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}