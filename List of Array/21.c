#include <stdio.h>

void rightRotateByOne(int *arr, int n) {
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void rightRotate(int *arr, int n, int d) {
    for (int i = 0; i < d; i++) {
        rightRotateByOne(arr, n);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, N = 100;
    int arr[N];

    printf("Enter size of the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int d;
    printf("Number of times to rotate: ");
    scanf("%d", &d);

    printf("Original array: ");
    printArray(arr, n);

    rightRotate(arr, n, d);

    printf("Array after right rotation by %d positions: ", d);
    printArray(arr, n);

    return 0;
}
