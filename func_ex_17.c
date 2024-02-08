#include<stdio.h>
void re(int a, int b, int ar[])
{
	int i,j;
	for(i=0;i<a;i++)
	{
		if(ar[i]==b)
		{
			a--;
			for(j=i;j<a;j++)
			{
				ar[j]=ar[j+1];
			}
			printf("New array is:\n");
			for(j=0;j<a;j++)
			{
				printf("%4d",ar[j]);
			}
			
		}
	}
}


int main()
{
	int i,x,y;
	printf("Please enter a number:\n");
	scanf("%d",&x);
	int arr[100];
	srand(time(0));
	printf("Elements of array are:\n");
	for(i=0;i<x;i++)
	{
		arr[i]=rand()%100;
		printf("%d\n",arr[i]);
	}
	printf("Please enter the element that want to remove:\n ");
	scanf("%d",&y);
	re(x,y,arr);
	
	
	
	return 0;
}
