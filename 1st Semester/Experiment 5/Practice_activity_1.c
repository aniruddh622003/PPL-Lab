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
        int nodig = (int)log10(n)+1;
        while(c != 0){
            digit = c % 10;
            sum += pow(digit,nodig);
            c /= 10;
        }

        if (i == sum)
        {
            printf("%d ", i);
        }
        
    }
}