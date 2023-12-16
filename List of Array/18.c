
#include <stdio.h>

int main()
{
    int i, n, N = 100, found, toSearch;
    int arr[N];

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    found = 0;

    for (i = 0; i < n; i++)
    {

        if (arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}