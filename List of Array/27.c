#include <stdio.h>


int main() {
    int MAX_SIZE=20;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE];
    int rows, columns;

    printf("Enter the number of rows and columns for the matrices (<= %d): ", MAX_SIZE);
    scanf("%d%d", &rows, &columns);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int equal = 1; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                equal = 0; 
                break;
            }
        }
        if (!equal) {
            break; 
        }
    }

    if (equal) {
        printf("Matrices are equal.\n");
    } else {
        printf("Matrices are not equal.\n");
    }

    return 0;
}
