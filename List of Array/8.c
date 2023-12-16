
#include <stdio.h>

int main()
{
    int i, n, N = 100;
    int arr[N];

    printf("Enter size of the array : ");
    scanf("%d", &n);
    int dest[n];
    printf("Enter elements in the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        dest[i] = arr[i];
    }

  
    printf("\nElements of source array are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", dest[i]);
    }

    return 0;
}