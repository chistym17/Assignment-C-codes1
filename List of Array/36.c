//transpose of a matrix

#include <stdio.h>

int main() {
    int MAX_SIZE = 20;

    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, columns;

    printf("Enter the number of rows and columns for the matrix (<= %d): ", MAX_SIZE);
    scanf("%d%d", &rows, &columns);

    printf("Enter elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int transpose[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
