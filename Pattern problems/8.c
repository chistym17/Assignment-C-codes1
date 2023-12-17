#include <stdio.h>
//hollow inverted mirrored right triangle
int main() {
    int size;

    printf("Enter the size : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0  || j == size - 1 || i == j || i == j) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}
