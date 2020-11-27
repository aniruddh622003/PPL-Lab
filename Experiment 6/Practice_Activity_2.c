#include <stdio.h>
int r = 0;
int reverse(int n){
    if (n == 0)
    {
        return 0;
    }
    r *= 10;
    r += n % 10;
    reverse(n/10);
    return r;
}

void main(){
    int num, rev;
    printf("Enter a Number: ");
    scanf("%d", &num);

    rev = reverse(num);
    printf("The reversed number is %d", rev);
}