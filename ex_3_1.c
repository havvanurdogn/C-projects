#include<stdio.h>
int main()
{
	int arr[10];
	int max=0;
	int min=1000;
	int i;
	printf("Please enter 10 integers for array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]<min) min=arr[i];
		if(arr[i]>max) max=arr[i];
	}
	printf("Minimum element of array is %d\n",min);
	printf("Maximum element of array is %d\n",max);
	
	
	
	
	return 0;
}
