
#include <stdio.h>

int main()
{
    int i,n, N=100,even,odd;
    int arr[N]; 

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    even = 0;
    odd  = 0;

    for(i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);




    return 0;
}