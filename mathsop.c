#include <stdio.h>

int main(){

    float a,b;
    printf("Enter First Value: ");
    scanf("%f", &a);

    printf("Enter Second Value: ");
    scanf("%f", &b);

    printf("Sum = %f\n", a+b);
    printf("Difference = %f\n", a-b);
    printf("Product = %f\n", a*b);
    if (b != 0)
    {
        printf("Quotient = %f\n", a/b);
    }
    else
    {
        printf("b is zero thus can't divide\n");
    }
    
    

    return 0;
}