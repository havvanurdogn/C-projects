#include<stdio.h>
#include<stdlib.h>
void create(int *a,int num)
{
	int i;
	printf("These are elements of array:\n");
	for(i=0;i<num;i++)
	{
		a[i]=rand()%50;
		printf("%4d",a[i]);
	}
}
void sort(int *a, int num)
{
	int i,j,g;
	printf("\nSorted elements:\n");
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				g=a[j];
				a[j]=a[j+1];
				a[j+1]=g;
			}
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%4d",a[i]);
	}
}
void max(int *a, int num)
{
	int i,max;
	max=a[0];
	for(i=0;i<num;i++)
	{
		if(max<a[i]) max=a[i];
	}
	printf("\nMaximum element is %d",max);
}
int main()
{
	int *p;
	int n,i;
	srand(time(NULL));
	printf("Please enter a number:\n");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	create(p,n);
	sort(p,n);
	max(p,n);
	free(p);
	return 0;
}
