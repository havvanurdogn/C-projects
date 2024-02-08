#include<stdio.h>
int findmin(int *arr, int min)
{
	int i;
	min=*arr;
	for(i=0;i<10;i++)
	{
		if(min>*(arr+i)) min=*(arr+i);
	}
	return min;
}
int findmax(int *arr, int max)
{
	int i;
	max=*arr;
	for(i=0;i<10;i++)
	{
		if(max<*(arr+i)) max=*(arr+i);
	}
	return max;
}
int main()
{
	int arr[10];
	int i,min,a,max,b;
	int *p;
	p=arr;
	printf("Please enter number of ten elements for array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",p+i);
	}
	a=findmin(arr,min);
	b=findmax(arr,max);
	printf("Maximum element is %d\n",b);
	printf("Minimum element is %d\n",a);
	
	return 0;
}
