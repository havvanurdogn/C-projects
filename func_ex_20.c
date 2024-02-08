#include<stdio.h>
void sort(int a,int A[])
{
	int i,j,max;
	for(i=0;i<a-1;i++)
	{
		for(j=0;j<a-1-i;j++) 
		{
			if(A[j]>A[j+1])
			{
				max=A[j];
				A[j]=A[j+1];
				A[j+1]=max;
			}
		}
		
	}
	for(i=0;i<a;i++)
	{
		printf("%4d",A[i]);
	}
}




int main()
{
	int i,x;
	int arr[100];
	printf("Please enter how many elements in array:\n");
	scanf("%d",&x);
	srand(time(0));
	for(i=0;i<x;i++)
	{
		arr[i]=rand()%100;
		printf("%d\n",arr[i]);
	}
	printf("New array is:\n");
	sort(x,arr);
	
	return 0;
}
