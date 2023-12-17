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

    int count = 0;
    int totalElements = rows * columns;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }

    if (count > totalElements / 2) {
        printf("The matrix is sparse.\n");
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}
