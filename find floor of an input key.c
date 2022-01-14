#include<stdio.h>
void main()
{
    int arr[50], n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("\nenter array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int ele;
    printf("\nenter element to be searched: ");
    scanf("%d",&ele);
    int mid = (n-1)/2,b=0,e=n-1;
    while(1)
    {
        if(e-b==1)
        {
            printf("\nfloor of input key: %d",arr[b]);
            return;
        }
        else if(ele<arr[mid])
        {
            e=mid;
            mid=(b+e)/2;
        }
        else
        {
            b=mid;
            mid=(b+e)/2;
        }
    }
}
