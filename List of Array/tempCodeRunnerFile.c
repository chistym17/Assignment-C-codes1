#include <stdio.h>

void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void leftRotate(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, N = 100;
    int arr[N];

    printf("Enter size of the array : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int d;
    printf("number of times to rotate");
    scanf("%d", d);

    printf("Original array: ");
    printArray(arr, n);

    leftRotate(arr, n, d);

    printf("Array after left rotation by %d positions: ", d);
    printArray(arr, n);

    return 0;
}
