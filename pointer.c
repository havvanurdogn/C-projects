#include<stdio.h>
int main()
{
	int arr[100];
	int *pointer,n,i;
	printf("Please enter the size of array:\n");
	scanf("%d",&n);
	printf("Please enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
	printf("\nArray is:\n");
	pointer=arr;
	for(i=0;i<n;i++)
	{
		printf("%4d",*(pointer+i));
	}
	
	return 0;
}
