#include <stdio.h>
// ones complement
int main()
{
    int binaryNum;
    int bit;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);

    printf("One's complement: ");
    while (binaryNum > 0)
    {
        bit = binaryNum % 10;
        if (bit == 1)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        binaryNum /= 10;
    }

    printf("\n");

    return 0;
}
