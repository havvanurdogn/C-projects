#include<stdio.h>
#include<string.h>
int main()
{
	int r;
	char x[]="havva";
	char y[]="Havva";
	r=strcmp(y,x);
	printf("%d\n",r);
	
	return 0;
}
