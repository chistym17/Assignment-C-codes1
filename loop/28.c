#include <stdio.h>
// 1 to n prime numbers sum
int main() {
    int n,sum=0;

    printf("Enter Number: ");
    scanf("%d", &n);

    int prime[n + 1];

    for (int i = 0; i <= n; i++) {
        prime[i] = 1; 
    }

    prime[0] = 0;
    prime[1] = 0; 

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }

    printf("Prime numbers up to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            sum+=i;;
        }
    }
printf("%d",sum);
    return 0;
}
