#include <stdio.h>

// Function to check prime (optimized)
int isPrime(int n) {
    if(n <= 1) return 0;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d:\n", n);

    for(int i = 1; i <= n; i++) {
        if(isPrime(i))
            printf("%d ", i);
    }

    return 0;
}