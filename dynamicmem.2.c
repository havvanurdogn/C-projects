#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int n,i;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	srand(time(NULL));
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		*(a+i)=rand()%100;
	}
	printf("Elements of array:\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(a+i));
	}
	printf("\nSquare of elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(a+i)**(a+i));
	}
	free(a);
	
	return 0;
}
