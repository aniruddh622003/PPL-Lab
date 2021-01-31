#include <stdio.h>

void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    printf("Entered String is: %s\n", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("String in Uppercase is: %s", str);
    
    
}