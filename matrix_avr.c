#include<stdio.h>
int main()
{
	int x[4][4]={{84,117,98,36},{134,92,345,289},{36,85,33,147},{125,234,91,188}};
	int i,j,sum=0;
	float avr;
	
	for(i=0;i<4;i++){
	for(j=0;j<4;j++)
	printf("%5d",x[i][j]);
	printf("\n");
	}

	for(i=0;i<4;i++){
	
	for(j=0;j<4;j++){
		sum=sum+x[i][j];
	}
	avr=sum/4;
	printf("\nAverage is %.2f for %d row\n",avr,i+1); 
	}
	
	int nem = 0;
	
	return 0;
}
