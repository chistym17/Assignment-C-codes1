#include <stdio.h>

int main()
{
    int MAX_SIZE= 20;

        int matrix1[MAX_SIZE][MAX_SIZE],
        matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, columns1, rows2, columns2;

    printf("Enter the number of rows and columns for the first matrix (<= %d): ", MAX_SIZE);
    scanf("%d%d", &rows1, &columns1);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix (<= %d): ", MAX_SIZE);
    scanf("%d%d", &rows2, &columns2);

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (columns1 != rows2)
    {
        printf("Multiplication is not possible.\n");
        return 1; 
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resulting matrix after multiplication:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
