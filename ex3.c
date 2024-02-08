#include<stdio.h>
void displacement(int *arr,int *ptr1, int *ptr2 , int n)
{
	
	int g;
	for(ptr1=arr,ptr2=arr+n-1;ptr1<ptr2;ptr1++,ptr2--)
	{
		g=*ptr1;
		*ptr1=*ptr2;
		*ptr2=g;
	}
	
	printf("\nAfter displacement:\n");
	for(ptr2=arr;ptr2<=arr+n-1;ptr2++)
	{
		printf("%4d",*ptr2);
	}
}
int main()
{
	int arr[100];
	int i,n;
	int *ptr1,*ptr2;
	printf("Please enter the size of array:\n");
	scanf("%d",&n);
	printf("Please enter elements of array:\n");
	for(ptr1=arr;ptr1<arr+n;ptr1++)
	{
		scanf("%d",ptr1);
	}
	printf("You create an array :\n");
	for(ptr1=arr;ptr1<arr+n;ptr1++)
	{
		printf("%4d",*ptr1);
	}
	displacement(arr,ptr1,ptr2,n);
	
	
	
	return 0;
}
