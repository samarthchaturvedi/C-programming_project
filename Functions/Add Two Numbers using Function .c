#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Function call
    printf("Sum = %d\n", add(x, y));

    return 0;
}