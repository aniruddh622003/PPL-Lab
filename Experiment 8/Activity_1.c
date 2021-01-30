#include <stdio.h>

void main(){
    int dummy_matrix[100][100];
    printf("Enter the order of matrix: ");
    int m,n;
    scanf("%d %d", &m, &n);

    printf("Enter elements of the matrix: ");
    for (int i = 0; i < m; i++)
    {
         for (int j = 0; j < n; j++)
         {
             scanf("%d", &dummy_matrix[i][j]);
         }
         
    }
    

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += dummy_matrix[i][j];
        }
        printf("Sum of elements in row %d = %d\n", i, sum);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += dummy_matrix[j][i];
        }
        printf("Sum of elements in column %d = %d\n", i, sum);
    }
    
}