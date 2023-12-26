#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    for (int num = 1; num <= n; ++num) {
        sum = 0;

        for (int i = 1; i < num; ++i) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
