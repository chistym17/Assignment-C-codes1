//inverted right triangle

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-i-1; j++) {
            printf("*"); 
        }

    
        printf("\n");
    }

    return 0;
}
