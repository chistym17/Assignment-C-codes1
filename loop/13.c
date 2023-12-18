#include <stdio.h>
// swap first and last digit
int main()
{
    int n, lastDigit, firstDigit, temp;

    printf("Enter any number: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    temp = n;

    while (temp >= 10)
    {
        temp /= 10;
    }
    firstDigit = lastDigit;
    lastDigit = temp;

    printf("after swapping last digit is digit = %d\n", firstDigit);
    printf("after swapping first digit  = %d\n", lastDigit);

    return 0;
}
