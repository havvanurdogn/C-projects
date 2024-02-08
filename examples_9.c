#include<stdio.h>
int main()
{
	
	float n;
    do
	{
		printf("Please enter a positive number:\n");
	    scanf("%d",&n);
	    if(n<0)
	    {
	    	printf("Try again:::\n");
		}
		if(n<0)  continue;
		printf("Result is %.2f\n",sqrt(n));
	}
	while(n);
	
	
	return 0;
}
