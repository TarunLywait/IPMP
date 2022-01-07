#include <stdio.h>
void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void main()
{
    int arr[50],n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("\nenter the elements: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr, n);
    printf(" \nSorted array: ");
    for (int j=0; j < n; j++)
        printf("%d ", arr[j]);
}
