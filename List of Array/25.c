#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int matrix[20][20];
    int rows, columns, scalar;

    scanf("%d", &rows);
    scanf("%d", &columns);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the scalar constant: ");
    scanf("%d", &scalar);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] *= scalar;
        }
    }

    printf("Resulting matrix after scalar multiplication:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
