// rhoumbus star pattern

#include <stdio.h>
int main()
{
    int size;

    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < size; k++)
        {
            printf("*");
        }

      for (int z = 0; z < i; z++)
        {
            printf(" ");
        }


        printf("\n");
    }

    return 0;
}
