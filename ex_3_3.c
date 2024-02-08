#include<stdio.h>
int main()
{
	int arr[100][100];
	int i,j;
	printf("   I");
	for(i=1;i<=10;i++)
	{
		printf("%4d",i);
	}
	printf("\n");
	for(i=1;i<10;i++)
	{
		printf("------",i);
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("%4d",i);
		for(j=1;j<=10;j++)
		{
			printf("%4d",i*j);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
