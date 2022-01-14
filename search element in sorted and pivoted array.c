#include <stdio.h>

int pivot(int[], int, int);
int binarySearch(int[], int, int, int);

int pivotedBinarySearch(int arr[], int n, int key)
{
    int p = pivot(arr, 0, n - 1);
    if (p == -1)
        return binarySearch(arr, 0, n - 1, key);
    if (arr[p] == key)
        return p;
    if (arr[0] <= key)
        return binarySearch(arr, 0, p - 1, key);
    return binarySearch(arr, p + 1, n - 1, key);
}

int pivot(int arr[], int low, int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
    if (arr[low] >= arr[mid])
        return pivot(arr, low, mid - 1);
    return pivot(arr, mid + 1, high);
}

int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
    return binarySearch(arr, low, (mid - 1), key);
}

void main()
{
    int arr[20];
    printf("enter size: ");
    int n, key;
    scanf("%d",&n);
    printf("\nenter array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nenter key: ");
    scanf("%d",&key);
    printf("\nindex of element: %d",
    pivotedBinarySearch(arr, n, key));
}
