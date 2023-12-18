//check prime


#include <stdio.h>

int main()
{
    int i, num, flag;
    flag= 1; 

    printf("Enter any number to check prime: ");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag = 0;
            break;
        }
    }


    if(flag == 1 && num > 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is composite number", num);
    }

    return 0;
}