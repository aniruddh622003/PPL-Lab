#include <stdio.h>

void star(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j >= 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= (i*2); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

void number(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
}

void main(){

    int option;
    printf("Select the menu number of the pattern you want to see. \n1. Star Pattern \n2. Number Pattern\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Enter Number of lines of star pattern you want to see: ");
        int a;
        scanf("%d", &a);
        star(a);
        break;
    
    case 2:
        printf("Enter Number of lines of number pattern you want to see: ");
        int b;
        scanf("%d", &b);
        number(b);
        break;
    }
}