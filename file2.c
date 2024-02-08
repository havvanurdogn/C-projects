#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1;
	/*char sentence[100];
	
	printf("Please write a sentence:\n");
	gets(sentence);
	f1=fopen("bilgi1.txt","w");
	fprintf(f1,"%s",sentence);*/
	char character;
	f1=fopen("bilgi.txt","r");
	if(f1==NULL) printf("Do not exist!");
	else
	{
		do
		{
			character=fgetc(f1);
			if(character!=EOF)
			{
				putchar(character);
			}
		}while(character!=EOF);
	}
	
	
	
	fclose(f1);
	printf("\nSuccessful!");
	return 0;
}
