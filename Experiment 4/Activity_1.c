#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enter Three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Biggest of these are ");
    if (a > b)
    {
        if (a > c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }        
    }
    else
    {
        if (b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
        
    }
    
    
}