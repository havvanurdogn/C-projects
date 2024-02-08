#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Please enter a sentence:\n");
	gets(str);
	for(i=0;str[i];i++)
	{
		printf("%4c",str[i]);
	}
	
	
	return 0;
}
