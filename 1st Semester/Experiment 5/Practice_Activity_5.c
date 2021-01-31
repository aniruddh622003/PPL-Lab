#include <stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int revnum = 0, dig = 0; 
    int c = n;
    do
    {
        revnum *= 10;
        dig = c % 10;
        revnum += dig;
        c /= 10;
    } while (c > 0);
    
    printf("This number with reversed digits is: %d\n", revnum);

    if (revnum == n)
    {
        printf("This number is a Palindrome");
    }
    else
    {
        printf("This number is not a Palindrome");
    }
    
    
}