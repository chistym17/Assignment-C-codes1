#include <stdio.h>

int main() {
    int matrix[2][2];

    printf("Enter elements of the 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    printf("Determinant of the 2x2 matrix: %d\n", det);

    return 0;
}
