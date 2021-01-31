#include <stdio.h>

void main(){
    int num; 
    printf("Enter a Number: ");
    scanf("%d", &num);

    int sum = 0, n = num;
    while (n != 0)
    {
        int d = n % 10;
        sum += d;
        n /= 10;
    }
    
    printf("Sum of digits of %d is %d", num, sum);
    
}