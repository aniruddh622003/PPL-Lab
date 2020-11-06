#include <stdio.h>

void swapWith(int n1, int n2){
    int c;
    c = n2;
    n2 = n1;
    n1 = c;
    printf("Numbers swapped with use of third variable! Order of numbers: %d and %d\n", n1, n2);
}

void swapWithout(int n1, int n2){
    n1 = n1 + n2;
    n2  = n1 - n2;
    n1 = n1 - n2;
    printf("Numbers swapped without use of third variable! Order of numbers: %d and %d\n", n1, n2);
}

void main(){
    int a, b;
    printf("Enter 2 numbers ");
    scanf("%d %d", &a, &b);

    printf("Entered number order: %d %d\n", a, b);

    swapWith(a, b);
    swapWithout(a, b);
}