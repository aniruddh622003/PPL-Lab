#include <stdio.h>

void main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("List of armstrong numbers between 1 and %d are: ", n);

    for (int i = 1; i <= n; i++)
    {
        int sum = 0, digit;
        int c = i;

        while(c != 0){
            digit = c % 10;
            sum += (digit*digit*digit);
            c /= 10;
        }

        if (i == sum)
        {
            printf("%d ", i);
        }
        
    }
}