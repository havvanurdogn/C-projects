#include<stdio.h>
int perfectnum(int num)
{
	int i=1;
	int sum=0;
	while(i<num)
	{
		if(num%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(num==sum) return 1;
	else return 0;
	
}
int main()
{
	int x,r;
	printf("Please enter a number:\n");
	scanf("%d",&x);
	r=perfectnum(x);
	if(r==1) printf("%d is perfect number.\n",x);
	else printf("%d is not perfect number.\n",x);
	return 0;
}
