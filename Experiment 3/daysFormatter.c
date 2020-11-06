#include <stdio.h>

void main(){
    printf("Enter number of days: ");
    int days;
    scanf("%d", &days);

    int yr = days/365;
    int rem = days%365;
    int mnth = rem/30;
    rem = rem%30;
    printf("%d years, %d months and %d days", yr, mnth, rem);
}