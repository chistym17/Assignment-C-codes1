
#include <stdio.h>

int main()
{
    int i, n, N = 100, element, position, prev;
    int arr[N];

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert : ");
    scanf("%d", &element);

    printf("Enter position to insert : ");
    scanf("%d", &position);
    int newarr[n + 1];
    for (int i = 0; i < position - 1; i++)
    {
        newarr[i] = arr[i];
    }
    for (int i = position ; i < n + 1; i++)
    {
        newarr[i] = arr[i - 1];
    }
    newarr[position - 1] = element;

    for (i = 0; i < n + 1; i++)
    {
        printf("%d", newarr[i]);
    }

    return 0;
}