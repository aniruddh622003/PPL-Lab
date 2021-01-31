#include <stdio.h>

void main(){
    int array[100];
    printf("Enter length of array: ");
    int len;
    scanf("%d", &len);
    printf("Enter Elements of the array: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
    }
    int evencount = 0;
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 0)
        {
            evencount++;
        }
    }
    printf("There are %d even numbers in the array!", evencount);
}