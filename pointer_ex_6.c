#include<stdio.h>
int main()
{
	int source_arr[100];
	int dest_arr[100];
	int *source_ptr,*dest_ptr,*end_ptr;
	int n,i;
	source_ptr=source_arr;
	dest_ptr=dest_arr;
	printf("Please enter the size of array:\n");
	scanf("%d",&n);
	printf("Please enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(source_ptr+i));
	}
	end_ptr=&source_arr[n-1];
	printf("Before was copied:\n");
	bastir(source_arr,n);
	while(source_ptr<=end_ptr)
	{
		*dest_ptr=*source_ptr;
		source_ptr++;
		dest_ptr++;
	}
	printf("\nAfter being copied source array:\n");
	bastir(source_arr,n);
	printf("\nAfter being copied destination array:\n");
	bastir(dest_arr,n);
	return 0;
}
void bastir(int *arr, int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%4d",*(arr+i));
	}
}
