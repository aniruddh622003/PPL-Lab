#include <stdio.h>

union product
{
    char name[50];
    float pricePerUnit;
    int noOfItems;
};

void main(){
    union product pro, *b;
    b = &pro;

    printf("Enter product name: ");
    scanf("%s", &pro.name);
    printf("Enter price of one unit: ");
    scanf("%f", &pro.pricePerUnit);
    float x = b->pricePerUnit;
    printf("Price per unit: %.2f\n", x);
    printf("Enter number of item purchased: ");
    scanf("%d", &pro.noOfItems);
    int y = b->noOfItems;
    printf("Number of items: %d\n", y);
    printf("\nTotal amount to be paid: %.2f", x*y);
}