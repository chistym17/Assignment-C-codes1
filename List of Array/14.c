
#include <stdio.h>

int main()
{
    int arr[100];
    int size, i, j, count, max;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int freq[max + 1];

    for (int i = 0; i <= max; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i <= max; i++)
    {
        if (freq[i] > 1)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[j] == i)
                    arr[j] = 0;
            }
        }
    }
    printf("new array after deleting duplicate items:");
    for (int i = 0; i < size; i++)
    {

        if (arr[i] != 0)
            printf("%d", arr[i]);
    }

    return 0;
}