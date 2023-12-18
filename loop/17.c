//check palindrom number
#include <stdio.h>

int main()
{
    int num,original, reverse = 0;

    printf("Enter any number : ");
    scanf("%d", &num);
    original=num;
    while(num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    if(original==reverse)printf("Palindrom");
    else printf("Not Palindrom");

    return 0;
}