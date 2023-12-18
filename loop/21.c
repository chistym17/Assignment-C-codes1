

#include <stdio.h>

int main()
{
    int base, power,ans=1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    for(i=1; i<=power; i++)
    {
        ans= ans* base;
    }

    printf("%d ^ %d = %d", base, power,ans);

    return 0;
}