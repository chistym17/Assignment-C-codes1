/**
 * C program to print all negative elements in array
 */

#include <stdio.h>

int main()
{
    int i,n,N=100;
    int arr[N]; //

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}