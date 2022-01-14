# include <stdio.h>

int majority(int arr[], int n, int x)
{
	int i;
	int last_index;
	if(n%2) last_index = n/2+1;
	else last_index = n/2;
	for (i = 0; i < last_index; i++)
	{
		if (arr[i] == x && arr[i+n/2] == x)
			return 1;
	}
	return 0;
}

void main()
{
    int arr[20],n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("\nenter array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter element to be checked: ");
    int x;
    scanf("%d",&x);
	if (majority(arr, n, x))
		printf("\n%d is in majority",x);
	else
		printf("\n%d is not majority",x);
}
