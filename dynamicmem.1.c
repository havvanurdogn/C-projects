#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int n,i;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("Please enter %d elements of array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements of array:\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	free(a);
	
	
	return 0;
}
