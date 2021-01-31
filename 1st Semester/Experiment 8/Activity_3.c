#include <stdio.h>

int binary(int arr[], int leftIndex, int rightIndex, int num){
    if (rightIndex >= 1)
    {
        int mid = leftIndex + (rightIndex-1)/2;
        if (arr[mid] == num)
        {
            return mid;
        }

        if (arr[mid] > num)
        {
            return binary(arr, leftIndex, mid - 1, num);
        }
        return binary(arr, mid + 1, rightIndex, num);        
    }
    return -1;
    
}

void main(){
    int array[100];
    printf("Enter array size: ");
    int len;
    scanf("%d", &len);
    printf("Enter Elements of array in ascending/descending order:\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter number you want to search: ");
    int num;
    scanf("%d", &num);
    int index = binary(array, 0, len-1, num);
    (index == -1) ? printf("Element not in the array.")
                  : printf("Element present at index %d", index);
}