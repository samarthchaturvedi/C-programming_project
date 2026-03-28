#include <stdio.h>

int main() {
    int n;

    // Input limit
    printf("Enter N: ");
    scanf("%d", &n);

    // Print even numbers
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }

    return 0;
}