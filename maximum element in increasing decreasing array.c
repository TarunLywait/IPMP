#include <stdio.h>
int maximum(int arr[], int b, int e)
{
   if (b == e)
     return arr[b];

   if ((e == b + 1) && arr[b] >= arr[e])
      return arr[b];

   if ((e == b + 1) && arr[b] < arr[e])
      return arr[e];

   int mid = (b + e)/2;
   if ( arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
      return arr[mid];

   if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
     return maximum(arr, b, mid-1);
   else
     return maximum(arr, mid + 1, e);
}

void main()
{
    int arr[20],n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("\nenter array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nmaximum element: %d", maximum(arr, 0, n-1));
}
