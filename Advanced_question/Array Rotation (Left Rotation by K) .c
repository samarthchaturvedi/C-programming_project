#include <stdio.h>

// Function to reverse array part
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter K: ");
    scanf("%d", &k);

    k = k % n; // handle large K

    // Rotate using reversal algorithm
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);

    printf("Rotated array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}