#include<stdio.h>
int main()
{
	int a,b;
	printf("Please enter values:\n");
	scanf("%d %d",&a,&b);
	
	if(a>0 && b>0)  printf("Sign of result is '+'");
	else if(a>0 && b<0)  printf("Sign of result is '-'");
	else if(a<0 && b>0)  printf("Sign of result is '-'");
	else if(a<0 && b<0)  printf("Sign of result is '+'");
	else if(a==0 || b==0)  printf("Sign of result is '0'");
	
	
	
	
	
	
	
	return 0;
}
