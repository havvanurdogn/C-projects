#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0,f=0;
	printf("Please enter a sentence:\n");
	gets(str);
	while(str[i])
	{
		if(str[i]==32)
		{
			f++;
		}
		i++;
	}
	printf("You entered %d words.\n",(f+1));
	
	
	return 0;
}
