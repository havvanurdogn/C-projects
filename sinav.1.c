#include<stdio.h>
int main()
{
	int n,r;
	printf("Please enter power consumed:\n ");
	scanf("%d",&n);
	if(n<=200) r=n*0.5;
	else if(n<=400) r=n*0.65+100;
	else if(n<=600) r=230+n*0.8;
	printf("The amount to be paid by the costumer: %d\n",r);
	
	
	
	
	return 0;
}
