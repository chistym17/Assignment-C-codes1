#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = (a > b) ? a : b;
    printf("The max number is %d", ans);

    return 0;
}
