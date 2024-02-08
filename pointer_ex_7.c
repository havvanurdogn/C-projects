#include<stdio.h>
int main()
{
	int arr[100];
	int i,n,r;
	int *ptr;
	ptr=arr;
	printf("Please enter the size of array:\n");
	scanf("%d",&n);
	printf("Please enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("Elements of array:\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(ptr+i));
	}
	printf("\nPlease enter a number to research in array:\n");
	scanf("%d",&r);
	research(arr,n,r);
	return 0;
}
void research(int *arr, int n , int r)
{
	int i,index=0;
	int *endp;
	endp=(arr+n-1);
	while(arr<endp && *arr != r )
	{
		arr++;
	    index++;
	}
	if(arr<=endp) printf 
}
