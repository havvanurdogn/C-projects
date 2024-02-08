#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int schar[26]={0};
	int i=0;
	int max;
	char ch;
	printf("Please enter a sentence:\n");
	gets(str);
	while(str[i])
	{
		if(str[i]>='a' && str[i]<='z')
		{
			schar[str[i]-'a']++;
		}
		i++;
	}
	max=schar[0];
	for(i=1;i<26;i++)
	{
		if(schar[i]!=0)
		{
			if(schar[i]>max)
			{
				max=schar[i];
				ch=i+'a';
			}
		}
	}
	printf("The most used character is %c\n",ch);
	
	return 0;
}
