#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;

        fact = 1;
        for (int i = 1; i <= remainder; ++i) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a Strong number.\n", originalNum);
    } else {
        printf("%d is not a Strong number.\n", originalNum);
    }

    return 0;
}
