
#include <stdio.h>

int main()
{
    int i,n, N=100;
    int arr[N]; 

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
        for(i = n-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }



    return 0;
}