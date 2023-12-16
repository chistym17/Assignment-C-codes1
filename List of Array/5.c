
#include <stdio.h>

int main()
{
    int i,n, N=100,max,max2;
    int arr[N]; 

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    max2 = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

     
    }

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max2 && arr[i]!=max)
        {
            max2 = arr[i];
        }

     
    }

    printf("second Maximum element = %d\n", max2);





    return 0;
}