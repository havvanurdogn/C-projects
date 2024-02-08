#include<stdio.h>
int main()
{
	int arr1[3][4]={{7,8,9,10},{1,2,3,4},{5,6,7,8}};
	int arr2[3][4]={{78,45,12,89},{36,32,20,45},{85,26,45,23}};
	int sum[3][4];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
