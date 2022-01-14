#include <stdio.h>
int findMin(int arr[], int low, int high)
{
    if (high < low)  return arr[0];
    if (high == low) return arr[low];

    int mid = low + (high - low)/2;

    if (mid < high && arr[mid+1] < arr[mid])
       return arr[mid+1];
    if (mid > low && arr[mid] < arr[mid - 1])
       return arr[mid];
    if (arr[high] > arr[mid])
       return findMin(arr, low, mid-1);
    return findMin(arr, mid+1, high);
}

void main()
{
    int arr[20],n;
    printf("enter  size: ");
    scanf("%d",&n);
    printf("\nenter array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nthe minimum element: %d", findMin(arr, 0, n-1));
}
