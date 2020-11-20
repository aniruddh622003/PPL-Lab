#include <stdio.h>

void main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }    
}