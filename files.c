#include<stdio.h>
int main()
{
	int grades,i,count=0;
	FILE *f1;
	f1=fopen("ProgrammingGrades.txt","r");
	while(!feof(f1))
	{
		fscanf(f1,"%d",&grades);
		printf("%d\n",grades);
		count++;
    }
	printf("There was %d records.\n",count);
	fclose(f1);
	
	
	return 0;
}
