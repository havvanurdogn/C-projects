#include<stdio.h>
#include<stdlib.h>
void get(char *ch )
{
	printf("Please enter a string:\n");
	gets(ch);
	printf("Your string is: %s\n",ch);
}
int finde(char *ch )
{
	int i=0;
	while(ch[i])
	{
		i++;
	}
	return i;
}
void kaldir(char *ch )
{
	int i=0,j=0;
	printf("New created string that havenot space : ");
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=' ')
		{
			ch[j]=ch[i];
			j++;
		}
	}
	ch[j]='\0';
}
void invers(char *ch , int n)
{
	int i,g;
	for(i=0;i<(n/2)+1;i++)
	{
		g=ch[i];
		ch[i]=ch[n-1-i];
		ch[n-1-i]=g;
	}
	printf("\nYour string new: %s\n",ch);
}
int palendrom(char *ch, int n)
{
	int i,f=0;
	for(i=0;i<(n/2)+1;i++)
	{
		if(ch[i]==ch[n-1-i]) f++;
	}
	if(f==(n/2)+1) return 1;
	else return -1;
}
int main()
{
	char ch[100];
	int i,n,r;
	int *a;
	*a=n;
	get(ch);
	n=finde(ch);
	printf("Your entered a string that have %d character.\n",n);
	kaldir(ch);
	invers(ch,n);
	r=palendrom(ch,n);
	if(r==1) printf("This string is a palendrom.\n");
	else printf("This string is not a palendrom.\n");
	return 0;
}
