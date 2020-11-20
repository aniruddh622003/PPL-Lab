#include <stdio.h>

void main(){
    int num; 
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 6 == 0)
    {
        printf("The number is divisible by both 2 and 3");
    }
    else if (num % 2 == 0)
    {
        printf("The number is divisible by 2 but not 3");
    }
    else if (num % 3 == 0)
    {
        printf("The number is divisible by 3 but not 2");
    }
    else
    {
        printf("The number is neither divisible by 2 nor 3");
    }
}