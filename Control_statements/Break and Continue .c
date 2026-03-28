#include <stdio.h>

int main() {
    int n;

    // Input limit
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        // Skip number 5
        if(i == 5)
            continue;

        // Stop loop at 10
        if(i == 10)
            break;

        printf("%d ", i);
    }

    return 0;
}