#include <stdio.h>

// Product of all digits
int main() {
    int n, product = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n > 0) {
        product *= n % 10;
        n = n / 10;
    }

    printf("Product of all digits = %d\n", product);

    return 0;
}
