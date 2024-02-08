#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x[4][3]={25,78,6},{15,33,71},{92,16,28},{34,53,61};
	int i,j,maxi,maxj;
	printf("Please enter matrix values:\n");
	/*for (i=0;i<4;i++)
	    for( j=0;j<3;j++)
	    {
	    	printf("Please enter row %d column %d:",i+1,j+1);
	    	scanf("%d",&x[i][j]);
		} */
	 // we dont use because we entered the matrix values...   
	for (i=0;i<4;i++)
	{
	    for( j=0;j<3;j++)
	    printf("%5d",x[i][j]);
	    printf("\n");
		
	}
	
	max=x[0][0]; maxi=0; maxj=0;
	for (i=0;i<4;i++)
	    for( j=0;j<3;j++)
	    {if (x[i][j]>max) { max [i][j]; maxi; maxj;}
		}
	printf("Maximum is %d in row %d column %d\n",max,maxi,maxj);
	
	return 0;
}
