#include<stdio.h>
int main()
{
	int x[8][8]={{0,0,1,0,1,0,1,0},{0,0,1,1,0,1,0,0},{0,0,0,0,1,0,1,0},{0,0,0,0,0,0,0,0},{0,0,0,0,2,0,0,0},{0,0,2,0,2,0,0,0},{0,2,0,2,0,2,0,0},{0,0,0,0,0,0,0,0}};
    int i,j;
    for(i=0;i<8;i++)
    {
    for(j=0;j<8;j++)
    printf("%5d",x[i][j]);
    printf("\n");
	}

    
	
	
	
	
	
	return 0;
}