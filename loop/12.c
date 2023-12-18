//sum of first and last digit


#include <stdio.h>

int main() {
    int n, lastDigit, firstDigit, temp;

    printf("Enter any number: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    temp = n;

    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    printf("Sum of First and Last digit is = %d\n", firstDigit+lastDigit);

    return 0;
}
