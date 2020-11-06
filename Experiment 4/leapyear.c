#include <stdio.h>

void main(){
    int yr;
    printf("Enter Year: ");
    scanf("%d", &yr);
    if (yr % 400 == 0)
    {
        printf("This is a leap year");
    }
    else if (yr % 4 == 0 && yr%100 != 0)    
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    
    
}