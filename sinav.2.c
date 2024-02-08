#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1;
	char num[100][100],lecture[100][100];
	int grade[10];
	int i=0,max,stu,code=0;
	if((f1=fopen("grades.txt","r"))!=NULL)
	{
		while(!feof(f1))
		{
			fscanf(f1,"%s %s %d",&num[i],&lecture[i],&grade[i]);
			printf("%s %s %d\n",num[i],lecture[i],grade[i]);
			i++;
		}
		stu=i;
	}
	else printf("File is not exist.\n");
	max=grade[0];
	for(i=0;i<stu;i++)
	{
		if(max<grade[i]) 
		{
			max=grade[i];
			code=i;
		}
	}
	printf("Maximum grade is %d and lecture code is %s\n",max,lecture[code]);
	return 0;
}
