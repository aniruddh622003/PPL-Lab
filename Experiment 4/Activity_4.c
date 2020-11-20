#include <stdio.h>
#include <ctype.h>

void main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch (tolower(ch))
    {
    case 'a':
        printf("It's a Vowel");
        break;
    case 'e':
        printf("It's a Vowel");
        break;
    case 'i':
        printf("It's a Vowel");
        break;
    case 'o':
        printf("It's a Vowel");
        break;
    case 'u':
    printf("It's a Vowel");
    break;
    default: 
        printf("It's a consonant");
        break;
    }
}