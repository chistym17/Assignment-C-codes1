
#include <stdio.h>

int main()
{
    int i, n, N = 100, evenCount, oddCount;
    int arr[N], even[N], odd[N];

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    evenCount = 0;
    oddCount = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    printf("\nElements of even array: \n");
    printArray(even, evenCount);

    printf("\nElements of odd array: \n");
    printArray(odd, oddCount);

    return 0;
}