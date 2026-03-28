#include <stdio.h>

// Function to find maximum
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum = %d\n", max(a, b));

    return 0;
}