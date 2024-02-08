#include<stdio.h>
void floyd(int col)
{
	int i=1,j,a=1;
	while(i<=col)
	{
		j=1;
	    while(j<=i)
	    {
	    	printf("%d ",a);
	    	a++;
	    	j++;
		}
		printf("\n");
		i++;
	}
}

int main()
{
	int x;
	printf("How many columns do you want?\n");
	scanf("%d",&x);
	printf("\n");
	floyd(x);
	
	return 0;
}
