#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0;
	printf("Please enter a sentence:\n");
	gets(str);
	while(str[i])
	{
		i++;
	}
	printf("Number of character is %d in sentence.\n",i);
	return 0;
} 
