#include<stdio.h>
int median(int [], int);
int max(int x1,int x2);
int min(int x1,int x2);

int max(int x1,int x2)
{
    return (x1>x2?x1:x2);
}
int min(int x1,int x2)
{
    return (x1<x2?x1:x2);
}
int getMedian(int ar1[], int ar2[], int n)
{
	if (n <= 0)
		return -1;
	if (n == 1)
		return (ar1[0] + ar2[0])/2;
	if (n == 2)
		return (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1])) / 2;

	int m1 = median(ar1, n);
	int m2 = median(ar2, n);

	if (m1 == m2)
		return m1;

	if (m1 < m2)
	{
		if (n % 2 == 0)
			return getMedian(ar1 + n/2 - 1, ar2, n - n/2 +1);
		return getMedian(ar1 + n/2, ar2, n - n/2);
	}

	if (n % 2 == 0)
		return getMedian(ar2 + n/2 - 1, ar1, n - n/2 + 1);
	return getMedian(ar2 + n/2, ar1, n - n/2);
}

int median(int arr[], int n)
{
	if (n%2 == 0)
		return (arr[n/2] + arr[n/2-1])/2;
	else
		return arr[n/2];
}

void main()
{
	int ar1[20],ar2[20],n1,n2;
	printf("enter size of 1st array: ");
	scanf("%d",&n1);
	printf("\nenter size of 2nd array: ");
	scanf("%d",&n2);
	printf("\nenter 1st array: ");
	for(int i=0;i<n1;i++)
        scanf("%d",&ar1[i]);
    printf("\nenter 2nd array: ");
    for(int i=0;i<n2;i++)
        scanf("%d",&ar2[i]);
	if (n1 == n2)
		printf("\nmedian: %d", getMedian(ar1, ar2, n1));
	else
		printf("\narrays of unequal size!");
}
