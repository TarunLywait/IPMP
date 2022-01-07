#include <stdio.h>
void main()
{
    int choice,size,arr[50];
    printf("Enter size: ");
    scanf("%d",&size);
    printf("\nEnter array: ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    quick(arr, 0, size - 1);
    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = (left - 1);

    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return (i + 1);
}
void quick(int arr[], int left, int right)
{
    if (left < right)
    {
        int p = partition(arr, left, right);
        quick(arr, left, p - 1);
        quick(arr, p + 1, right);
    }
}
