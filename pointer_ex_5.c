#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *ptr1 , *ptr2 ;
	int f=0;
	printf("Please enter a string.\n");
	gets(str);
	for(ptr2=str;*ptr2;ptr2++);
	ptr2--;
	//printf("%c",*ptr2);
	for(ptr1=str;ptr1<ptr2;ptr1++ , ptr2--)
	{
		if(*ptr1==*ptr2) f++;
		
	}
	if((2*f+1)==strlen(str)) printf("This string is a palindrome.\n");
	else printf("This string is not a palindrome.\n");
	
	
	
	return 0;
}
