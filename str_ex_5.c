#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0,j=0;
	printf("Please enter a word:\n");
	gets(str);
	while(i<strlen(str))
	{
		j=0;
		while(j<=i)
		{
			printf("%4c",str[j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
	
	return 0;
}
