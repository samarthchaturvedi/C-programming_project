#include <stdio.h>

int main() {
    int n;

    // Input limit
    printf("Enter N: ");
    scanf("%d", &n);

    // Loop from 1 to N
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}