#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *file;
	char sentence[100];
	int i,n;
	printf("Please enter sentence:\n");
	gets(sentence);
	printf("How many times is written in file?\n");
	scanf("%d",&n);
	file=fopen("bilgi.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(file,"%s\n",sentence);
	}
	fclose(file);
	
	return 0;
}
