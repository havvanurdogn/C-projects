#include<stdio.h>
int main()
{
	int a,b;
	printf("Please enter two values:\n");
	scanf("%d %d",&a,&b);
	
	if(a==b) printf("%d and %d is equal.\n",a,b);
	if(a!=b) 
	{
		printf("%d and %d is not equal.\n",a,b);
		if(a<b) printf("%d is smaller than %d\n",a,b);
		else printf("%d is bigger than %d\n",a,b);
		
	}
	
	if(b%a==0) printf("%d is a multiple of %d .\n",a,b);
	else printf("%d is not a multiple of %d .\n",a,b);
	
	
	return 0;
}
