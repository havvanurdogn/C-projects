#include<stdio.h>
int main()
{
	float r;
	int i,stnum,fg,mg;
	char name[100],lg[100];
	FILE *fp;
	fp=fopen("LetterGrade.txt","w");
	for(i=1;i<=3;i++)
	{
	printf("Please enter student number:\n");
	scanf("%d",&stnum);
	printf("Please enter your name:\n");
	scanf("%s",&name);
	printf("Please enter midterm grade:\n");
	scanf("%d",&mg);
	printf("Please enter final grade:\n");
    scanf("%d",&fg);
	r=0.4*mg+0.6*fg;
	if(r>=90) { lg[0]='A';
	lg[1]='A';
	} 
	else if(r>=80) { lg[0]='B';
	lg[1]='B';
	}
	else if(r>=70) { lg[0]='C';
	lg[1]='C';
	}
	else if(r<=69) { lg[0]='F';
	lg[1]='F';
	}
	fprintf(fp,"%4d %4s %4s",stnum,name,lg);
	fprintf(fp,"\n");
	}
	fclose(fp);
	return 0;
}
