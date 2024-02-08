#include<stdio.h>
void bastir(int *source_arr, int N)
{
	printf("There are values:\n");
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d\n",source_arr);
		source_arr++;
	}
}
int main()
{
	int source_arr[100];
	int dest_arr[100];
	int *ptr;
	int i,n;
	printf("Please enter the size of array:\n");
	scanf("%d",&n);
	printf("Please enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr);
		ptr++;
	}
	ptr=source_arr;
	bastir(source_arr,n);
	
	return 0;
}
