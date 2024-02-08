#include<stdio.h>
void tri(int x)
{
	int i,j;
	int space=x-1;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		space--;
		for(j=1;j<=2*i-1;j++)
		{
			printf("c");
		}
		printf("\n");
	}
}
void trian(int a)
{
	int i,j;
	int space=1;
	for(i=1;i<=a-1;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		space++;
		for(j=1;j<=2*(a-1)-1;j++)
		{
			printf("+");
		}
		printf("\n");
	}
}


int main()
{
	int row;
	printf("Please enter how many rows do you want:\n");
	scanf("%d",&row);
	tri(row);
	trian(row);
	return 0;
}
