#include<stdio.h>
int main()
{
	int arr[2][3][4];
	printf("Please create a matrix 2 matrix 3 rows and 4 columns.\n");
	int a,b,c;
	for(a=0;a<2;a++)
	{
		for(b=0;b<3;b++)
		{
			for(c=0;c<4;c++)
			{
				scanf("%d",&arr[a][b][c]);
			}
		}
	}
	printf("A matrix that you created:\n");
	for(a=0;a<2;a++)
	{
		for(b=0;b<3;b++)
		{
			for(c=0;c<4;c++)
			{
				printf("%d\t",arr[a][b][c]);
			}
			printf("\n");
		}
		printf("\n");
		printf("\n");
	}
	
	
	
	return 0;
}
