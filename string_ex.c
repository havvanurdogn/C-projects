#include<stdio.h>
#include<string.h>
int main()
{
	char str[100][100]={"one","two","three","four"};
	
	printf("Fourth element is %s\n",str[3]);
	printf("Third character of fourth element is %c\n",str[3][2]);
	
	return 0;
}
