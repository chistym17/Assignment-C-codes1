#include <stdio.h>

int main()
{
    int MAX_SIZE = 20;

    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, columns;

    printf("Enter the number of rows and columns for the matrix (<= %d): ", MAX_SIZE);
    scanf("%d%d", &rows, &columns);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < columns; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }

    printf("Sum of each column:\n");
    for (int j = 0; j < columns; j++)
    {
        int colSum = 0;
        for (int i = 0; i < rows; i++)
        {
            colSum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }

    return 0;
}
