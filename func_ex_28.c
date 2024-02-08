#include<stdio.h>
void fig(n,ch)
{
	int i,j;
	for(i=n;i>0;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	char ch;
	printf("Please enter character:\n");
	scanf("%c",&ch);
	printf("Please enter the edge number:\n");
	scanf("%d",&n);
	fig(n,ch);
}
