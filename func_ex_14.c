#include<stdio.h>
void f(int num)
{
	int i;
	int la,se=1,fi=0;
	for(i=0;i<num;i++)
	{
		if(i==0 || i==1) printf("%4d",i);
		else {
			la=se+fi;
			fi=se;
			se=la;
			printf("%4d",la);
		}
	}
	
}

int main()
{
	int x;
	printf("How many numbers created as fibonacci number?\n");
	scanf("%d",&x);
	printf("\n");
	f(x);
	return 0;
}
