#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[2][2];
	int j,i;
	printf("Please enter a's matrix values:");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	   scanf("%d",&a[i][j]);
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	printf("%5d",a[i][j]);
	printf("\n");	   
	
	int b[2][2];
	int m,n;
	printf("Please enter b's matrix values:");
	for(m=0;m<2;m++)
	for(n=0;n<2;n++)
	    scanf("%d",&b[m][n]);
	for(m=0;m<2;m++)
	for(n=0;n<2;n++)
	printf("%5d",b[m][n]);
	printf("\n");	
	
	
	
	
	
	return 0;
}
