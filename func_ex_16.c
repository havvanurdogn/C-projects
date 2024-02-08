#include<stdio.h>
int max(int A[], int num)
{
	int maxi,i;
	maxi=A[0];
	for(i=1;i<num;i++)
	{
		if(maxi<A[i]) 
		{
			maxi=A[i];
		} 
	}
	return maxi;
}
int min(int B[], int num)
{
	int mini,i;
	mini=B[0];
	for(i=1;i<num;i++)
	{
		if(mini>B[i]) 
		{
			mini=B[i];
		}
	}
	return mini;
}
int main()
{
	int i,x,a,b;
	printf("Please enter a number:\n");
	scanf("%d",&x);
	int arr[100];
	srand(time(NULL));
	printf("Elements of array are:\n");
	for(i=0;i<x;i++)
	{
		arr[i]=rand()%100;
		printf("%d\n",arr[i]);
	}
	a=max(arr,x);
	b=min(arr,x);
	printf("%d is maximum value.\n",a);
	printf("%d is minimum value.\n",b);
	return 0;
}
