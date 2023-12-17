//right triangle star


#include <stdio.h>

int main() {
    int size;

    printf("Enter the size : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            printf("*"); 
        }

    
        printf("\n");
    }

    return 0;
}
