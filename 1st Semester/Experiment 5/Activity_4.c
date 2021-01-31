#include <stdio.h>

void main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        float x = 1.0/i;
        sum += x;
    }

    printf("Sum if the given pattern till %d is %f", n, sum);    
}