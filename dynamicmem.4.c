#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p1,*p2;
	int i,j,n;
	p1=(int *)calloc(n,sizeof(int));
	p2=(int *)calloc(n,sizeof(int));
	printf("Please enter a number :\n");
	scanf("%d",&n);
	printf("There are even numbers to %d:\n",n);
	for(i=0;2*i<=n;i++)
	{
		*(p1+i)=2*i;
		printf("%4d",*(p1+i));
	}
	printf("\nThere are odd numbers to %d:\n",n);
	for(i=0;2*i+1<=n;i++)
	{
		*(p2+i)=2*i+1;
		printf("%4d",*(p2+i));
	}
	free(p1);
	free(p2);
	
	return 0;
}
