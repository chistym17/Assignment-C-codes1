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

    printf("First digit = %d\n", firstDigit);
    printf("Last digit  = %d\n", lastDigit);

    return 0;
}
