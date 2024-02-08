#include<stdio.h>
int main()
{
	char sen[100];
	char *p1,*p2;
	int flag;
	
	printf("Please enter the sentence that have maximum 100 character:\n");
	gets(sen);
	for(p2=sen;*p2;p2++)
	{
		
	}
	p2--;
	flag=1;
	for(p1=sen;flag && p1<p2;p1++,p2--)
	{
		if(*p1!=*p2) flag=0;
		
	}
	if(flag==1) printf("This %s is a palindrom.\n",sen);
	else printf("This %s is not a palindrom.\n",sen);
	return 0;
}
