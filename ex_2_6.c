#include<stdio.h>
int main()
{
	int n,l,mn,ml,d;
	d=abs(l-150);
    mn=n;
    ml=l;
	do
	{
		printf("Please enter the student's number:\n");
		scanf("%d",&n);
		printf("Please enter the student's length:\n");
		scanf("%d",&l);
		if(abs(l-150)<d)
		{
			d=abs(l-150);
			mn=n;
			ml=l;
		}
	} while(n>0);
	printf("The student's length that has %d number is %d closer 150.\n",mn,ml);
	
	
	return 0;
}
