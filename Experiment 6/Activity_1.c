#include <stdio.h>
#include <math.h>

void armstrong(int n){
    int check = n, sum = 0;
    int len = floor(log10(n)) + 1;
    while (check > 0)
    {  
        int dig = check % 10;
        sum += pow(dig, len);
        check /= 10;
    }
    if (n == sum){
        printf("%d is an Armstrong number \n", n);
    }
    else {
        printf("%d is not an Armstrong number \n", n);
    }    
}

void coprime(int n){
    int rev = 0, check = n;
    while (check > 0)
    {
        rev *= 10;
        rev += check % 10;
        check /= 10;
    }
    int hcf;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && rev % i == 0)
        {
            hcf = i;
        }
    }
    if (hcf == 1)
    {
        printf("The numbers %d and %d are co-primes \n", n, rev);
    }
    else
    {
        printf("The numbers %d and %d are not co-primes \n", n, rev);
    }
}

long long factorial(int n){
    long long fac = 1;
    
    for (int i = 1; i <= n; ++i)
    {
        fac *= i;
    }
    return fac;
    
}

void main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    armstrong(num);
    coprime(num);
    long long fac = factorial(num);
    printf("Factorial of %d is %lld", num, fac);
}