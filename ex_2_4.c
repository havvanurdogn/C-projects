#include<stdio.h>
int main()
{
	char ch;
	int sira;
	printf("Please enter a character:\n");
	scanf("%c",&ch);
	if((ch>='A') && (ch<='Z'))
	{
		sira=(int)ch - (int)'A'+1;
	}
	else if((ch>='a') && (ch<='z'))
	{
		sira=(int)ch - (int)'a'+1;
	}
	else printf("You entered wrong character:::\n");
	
	printf("This character is in %d. place.\n",sira);
	
	return 0;
}
