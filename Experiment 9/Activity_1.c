#include <stdio.h>

struct Product
    {
        char name[100];
        float pricePerUnit;
        int quantityPurchased;
        float amountSpent;
    };

void main(){

    struct Product pro, *b;
    b = &pro;  
    printf("Enter product name: ");
    scanf("%[^\n]%*c", pro.name);
    printf("Enter price per unit: ");
    scanf("%f", &pro.pricePerUnit);
    printf("Enter quantity purchased: ");
    scanf("%d", &pro.quantityPurchased);

    pro.amountSpent = pro.pricePerUnit*pro.quantityPurchased;

    printf("\nDisplaying product info.......\n");
    printf("Product Name: %s\n", b->name);
    printf("Price per unit of the product: %.2f\n", b->pricePerUnit);
    printf("Quantity purchased: %d\n", b->quantityPurchased);

    printf("Total amount spend on the product is %.2f", b->amountSpent);       
}