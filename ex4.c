#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch[100];
	int i=0,r=0;
	printf("Please enter a string:\n");
	gets(ch);
	while(ch[i])
	{
		if(ch[i]=='a') r++;
		i++;
	}
	printf("This string is including %d 'a' letters.\n",r);
	
	
	return 0;
}
