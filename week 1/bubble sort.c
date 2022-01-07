#include <stdio.h>
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              {
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              }
}
void main()
{
    int arr[50], n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printf("\nSorted array:");
    for (int j=0; j < n; j++)
        printf("%d ", arr[j]);
}
