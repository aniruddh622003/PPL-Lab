#include <stdio.h>

void main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >='a' && ch <='z' || ch >= 'A' && ch <= 'Z')
    {
        printf("You have entered an alphabet");
    }
    else if (ch >= '1' && ch <= '9')
    {
        printf("You have entered a number");
    }
    else
    {
        printf("You have entered a special character");
    }
    
}