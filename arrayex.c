#include<stdio.h>
int main()
{
	int numbers[5];
	int i;
	i=0;
	
	do
	{
	    scanf("%d",&numbers[i]);
	    i++;
	}while(i<5);
	i=0;
	do
	{
	    printf("%d\t",numbers[i]);
	    i++;
	}while(i<5);
	
	
	return 0;
}
