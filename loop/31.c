
//  C Armstrong numbers from 1 to n
 
#include <stdio.h>
#include <math.h>

int main() {
    int n, num, originalNum, remainder, digits, result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (num = 1; num <= n; ++num) {
        originalNum = num;
        digits = 0;
        result = 0;

        while (originalNum != 0) {
            originalNum /= 10;
            ++digits;
        }

        originalNum = num;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, digits);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
