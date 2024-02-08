#include<stdio.h>
void avrage(int *ar,int size)
{
	int i,sum=0;
	float avr;
	for(i=0;i<size;i++)
	{
		sum+=ar[i];
	}
	avr=sum/size;
	printf("Average of array is %.2f",avr);
}
int main()
{
	int i,n;
	int arr[100];
	printf("Please enter the size of array:\n");
	scanf("%d",&n);
	printf("Please enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	avrage(arr,n);
	return 0;
}
