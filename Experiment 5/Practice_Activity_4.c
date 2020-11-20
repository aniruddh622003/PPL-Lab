#include <stdio.h>

void main(){
    int n; 
    printf("Enter number till which you want prime numbers: ");
    scanf("%d", &n);
    printf("Prime numbers are: ");

    for (int i = 2; i <= n; i++)
    {
        int fac = 0;
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                fac++;
            }
        }
        if (fac == 0)
        {
            printf("%d ", i);
        }
        
        
    }
    
}