#include <stdio.h>

void main(){
    int a,b;
    printf("Please enter two numbers you want to multiply\n");
    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);

    int num = 0;

    for(int i = 0; i < b; i++){
        num += a;
    }

    printf("Multiplication Result: %d", num);
}