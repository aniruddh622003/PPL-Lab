#include <stdio.h>

int max(int n1,int n2){
    return (n1 > n2 ) ? n1 : n2;
}

int min(int n1,int n2){
    return (n1 < n2 ) ? n1 : n2;
}

void main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int Maximum = max(n1,n2);
    int Minimum = min(n1,n2);

    printf("\nMaximum: %d \nMinimun: %d", Maximum, Minimum);
}