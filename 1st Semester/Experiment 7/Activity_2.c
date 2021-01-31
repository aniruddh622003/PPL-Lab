#include <stdio.h>

int* insert(int Array[], int num, int i){
    
}

int main(){
    int array[100] = {1,2,3,4,5}, insert, num, j;
    int len = 5;
    printf("Current array is: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nEnter number to insert: ");
    scanf("%d", &num);
    printf("Enter position between 1 and %d: ", len);
    scanf("%d", &insert);
    len++;
    for (int i = len-1; i >= insert; i--)
    {
        array[i] = array[i-1];
    }
    array[insert-1] = num;
    printf("Array after insertion is: ");
    
    for (int i = 0; i < len; i++)
    printf("%d ", array[i]);
    
    int rem_index;
    printf("\nEnter index to remove: ");
    scanf("%d", &rem_index);
    len--;
    for (int i = rem_index-1; i < len; i++)
    {
        array[i] = array[i+1];
    }
    
    printf("Array after removal is: ");
    
    for (int i = 0; i < len; i++)
    printf("%d ", array[i]);
}