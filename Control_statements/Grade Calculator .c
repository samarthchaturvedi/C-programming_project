#include <stdio.h>

int main() {
    int marks;

    // Input marks
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Grade logic
    if(marks >= 90)
        printf("Grade A\n");
    else if(marks >= 75)
        printf("Grade B\n");
    else if(marks >= 50)
        printf("Grade C\n");
    else
        printf("Fail\n");

    return 0;
}