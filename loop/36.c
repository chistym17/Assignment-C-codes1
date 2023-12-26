#include <stdio.h>
//fibonacci series upto n

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d, ", firstTerm);

        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}
