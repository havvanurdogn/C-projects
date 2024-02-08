#include<stdio.h>
int main()
{
	int arr[100][100];
	int i,j,a;
	printf("Please enter numbers of column:\n");
	scanf("%d",&a);
	printf("\n\np");
	for(i=0;i<a;i++)
	{
		printf("%d    ",i);
	}
	printf("\n");
	printf("n\n");
	for(i=0;i<=a;i++)
	{
		printf("----");
	}
	printf("\n");
	for(i=0;i<a;i++)
	{
		arr[i][i]=1;
		arr[i][0]=1;
		for(j=1;j<i;j++)
		{
			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
		}
	}
	for(i=0;i<a;i++)
	{
		printf("%d --",i);
		for(j=0;j<=i;j++) 
		{
			printf("%d    ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
