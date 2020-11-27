#include <stdio.h>

int triangle_area(int base, int height){
    return base * height * 0.5;
}

void swap(int* n1, int* n2){
    printf("Original order -> Number 1: %d; Number 2: %d; \n", *n1, *n2);

    *n1 = *n1 ^ *n2;
    *n2 = *n1 ^ *n2;
    *n1 = *n1 ^ *n2;

    printf("After Swapping -> Number 1: %d; Number 2: %d; \n", *n1, *n2);
}

float* remainder (int a, int b){
    float rem = a % b;
    float *d = &rem;
    return d;
}

void main(){
    int num1, num2;
    printf("Enter Two numbers separated by a space: ");
    scanf("%d %d", &num1, &num2);


    int tArea = triangle_area(num1, num2);
    printf("Area of right angled triangle with sides %d and %d is %d \n", num2, num1, tArea);

    swap(&num1, &num2);
    float *rempoint;
    rempoint = remainder(num2, num1);
    printf("Remainder of %d divided by %d is %f", num2, num1, *rempoint);
}