#include<stdio.h>
void main()
{
    int arr[50], n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("\nenter array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int mid = (n-1)/2,b=0,e=n-1;
    while(1)
    {
        if(arr[mid]==mid)
        {
            printf("\nfixed index: %d",mid);
            return;
        }
        else if(mid<arr[mid])
        {
            e=mid-1;
            mid=(b+e)/2;
        }
        else if(mid<arr[mid])
        {
            b=mid+1;
            mid=(b+e)/2;
        }
        else printf("\nno fixeed point found.");
    }
}
