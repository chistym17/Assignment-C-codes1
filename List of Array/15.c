
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], mergeArray[205];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
     
    printf("Enter the size of first array : ");
    scanf("%d", &size1);

    printf("Enter elements in first array : ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of second array : ");
    scanf("%d", &size2);

    printf("Enter elements in second array : ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }


    mergeSize = size1 + size2;

    for(i=0; i<size1; i++)
    {
        mergeArray[i]=arr1[i];
    }

    for(i=0; i<size2; i++)
    {
        mergeArray[size1+i]=arr2[i];
    }
    /* 
=     */
    printf("\nArray merged in ascending order : ");
    for(i=0; i<mergeSize; i++)
    {
        printf("%d\t", mergeArray[i]);
    }

    return 0;
}