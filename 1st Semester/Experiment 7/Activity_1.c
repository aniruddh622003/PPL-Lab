#include <stdio.h>

int ArraySum(int Array[], int length) 
{ 
    if (length <= 0) 
        return 0; 
    return (ArraySum(Array, length - 1) + Array[length - 1]); 
} 

int main(){
    int Arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(Arr)/sizeof(Arr[0]);
    int sum = ArraySum(Arr, len);
    printf("%d", sum);
    return 0;
}