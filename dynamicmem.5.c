#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int i,n,min;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	srand(time(NULL));
	printf("Elements of array:\n");
	for(i=0;i<n;i++)
	{
		*(p+i)=rand()%50;
		printf("%4d",*(p+i));
	}
	printf("\n");
	min=*p;
	for(i=0;i<n;i++)
	{
		if(min>*(p+i)) min=*(p+i);
	}
	printf("Minimum element is %d",min);
	free(p);
	
	return 0;
}
