#include <stdio.h>

// Swap using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y, n;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Swap variables
    swap(&x, &y);

    printf("After swap: %d %d\n", x, y);

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Modify array using pointer
    int *ptr = arr;

    printf("Updated array (each element *2):\n");
    for(int i = 0; i < n; i++) {
        *(ptr + i) = *(ptr + i) * 2;
        printf("%d ", *(ptr + i));
    }

    return 0;
}