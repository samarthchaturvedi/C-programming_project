#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check vowel or consonant
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}