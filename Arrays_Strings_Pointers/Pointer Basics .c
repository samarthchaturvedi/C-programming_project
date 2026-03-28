#include <stdio.h>

int main() {
    int num = 10;

    // Pointer declaration
    int *ptr = &num;

    // Print value using pointer
    printf("Value = %d\n", num);
    printf("Using pointer = %d\n", *ptr);

    return 0;
}