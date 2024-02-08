#include<stdio.h>
int main()
{
	
	int a,b;
	printf("Please enter values:\n");
	scanf("%d %d",&a,&b);
	
	if(a>0 && b>0)  printf("sign (%d*%d) = +1",a,b);
	if(a<0 && b>0)  printf("sign (%d*%d) = -1",a,b);
	if(a<0 && b<0)  printf("sign (%d*%d) = +1",a,b);
	if(a>0 && b<0)  printf("sign (%d*%d) = -1",a,b);
	if(a==0 || b==0)  printf("sign (%d*%d) = 0",a,b);
	
	
	
	return 0;
}
