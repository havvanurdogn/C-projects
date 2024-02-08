#include<stdio.h>
void add(int ar[],int n,int in,int num)
{
	int i;
	for(i=n-1;i>=in-1;i--)
	{
		ar[i+1]=ar[i];
	}
	ar[in]=num;
	for(i=0;i<n+1;i++)
	{
		printf("%4d",ar[i]) ;
	}
}
int main()
{
	int i,n,in,a;
	int arr[100];
	printf("Please enter how many elements be in array:\n");
	scanf("%d",&n);
	srand(time(0));
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
	}
	printf("Elements of array are :\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
	printf("\nWhich indeks you add integer?\n");
	scanf("%d",&in);
	printf("Please enter an integer that you want to add:\n");
	scanf("%d",&a);
	printf("New array is:\n");
	add(arr,n,in,a);
	return 0;
}
