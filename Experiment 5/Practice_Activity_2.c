#include <stdio.h>

void main(){
    int n, t1 = 0, t2 = 1;
    printf("Enter value of n (Greater than 1): ");
    scanf("%d", &n);

    printf("Fibonacci Series till %d terms is: %d %d ", n, t1, t2);

    for (int i = 0; i < n-2; i++)
    {
        int c = t2; 
        t2 = t1 + t2;
        t1 = c;
        printf("%d ", t2);
    }
    
}