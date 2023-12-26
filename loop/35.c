#include <stdio.h>

int main() {
    int n, originalNum, remainder, sum, fact;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (int num = 1; num <= n; ++num) {
        originalNum = num;
        sum = 0;

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
            printf("%d\n", originalNum);
        }
    }

    return 0;
}
