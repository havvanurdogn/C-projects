#include<stdio.h>
int main()
{
	int x[10][10];
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j) x[i][j]=1;
			else x[i][j]=0;
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%4d",x[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
