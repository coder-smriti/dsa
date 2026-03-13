#include <stdio.h>

int main()
{
    int rows, cols;
    int A[100][100], T[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            T[j][i] = A[i][j];
        }
    }

    printf("Transpose of matrix:\n");

    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}