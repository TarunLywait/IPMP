#include<stdio.h>
void main()
{
    int arr[20];
    int n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    shellSort(arr, n);
    printf("\nsorted array: ");
    printArray(arr, n);
}

void shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d ",arr[i]);
}
