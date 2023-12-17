#include <stdio.h>
//hollow inverted right triangle
int main() {
    int size;

    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ( i == size - 1 || j == 0 || i == j || (i+j)==2) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}
