#include <stdio.h>

void main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Numbers divisible by 3 and 5 are: ");
    for (int i = 1; i <= n; i++)
    {
        if (i % 15 == 0)
        {
            printf("%d ", i);
        }
        
    }
    
}