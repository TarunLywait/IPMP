#include <stdio.h>
void main()
{
    int arr[20];
    int n;
    printf("size of the array: ");
    scanf("%d",&n);
    printf("\nenter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertionSort(arr, n);
    printf("\nthe sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionSort(int arr[], int n)
{
    int i, cur, j;
    for (i = 1; i < n; i++) {
        cur = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > cur) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = cur;
    }
}
