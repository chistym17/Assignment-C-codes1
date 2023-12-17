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

    int flag = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < columns; j++) {  
            if (matrix[i][j] != 0) {
                flag = 0;
                break;
            }
        }
        if (!flag) {
            break;
        }
    }

    if (flag) {
        printf("Lower triangular\n");
    } else {
        printf("Not lower triangular\n");
    }

    return 0;
}
