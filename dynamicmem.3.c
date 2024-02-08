#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p1,*p2;
	int g,i;
	p1=(int*)malloc(1*sizeof(int));
	p2=(int*)malloc(1*sizeof(int));
	printf("Please enter two numbers:\n");
	scanf("%d %d",p1,p2);
	printf("Before placement:\n1st number:%d\n2nd number:%d\n",*p1,*p2);
	g=*p1;
	*p1=*p2;
	*p2=g;
	printf("After placement:\n1st number:%d\n2nd number:%d\n",*p1,*p2);
	free(p1);
	free(p2);
	
	
	return 0;
}
