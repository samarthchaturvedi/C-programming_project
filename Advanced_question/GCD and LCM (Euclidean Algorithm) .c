#include <stdio.h>

// GCD function
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int g = gcd(a, b);
    int l = (a * b) / g;

    printf("GCD = %d\n", g);
    printf("LCM = %d\n", l);

    return 0;
}