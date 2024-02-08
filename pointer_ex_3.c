#include<stdio.h>
int main()
{
	int n,i;
	int arr[100];
	int *pntr;
	pntr=arr;
	printf("Please enter the size of array:\n");
	scanf("%d",&n);
	printf("Please enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(pntr+i));
	}
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(pntr+i));
	}
	
	
	
	return 0;
}
