#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int A[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	bool unit= true;
	int i,j;
	int m=3, n=3;
	printf("\n MATRIX A\n");
	
	for (i=0;i<n;i++){
	
	for (j=0;j<m;j++)
	    printf("%5d",A[i][j]);
	    printf("\n");
}
	for (i=0;i<n;i++){
	
	for (j=0;j<m;j++)
	    {
	    	if(i==j)
	    	  if(A[i][j]!=1) { unit=false;   break; }
	    	else
	    	  if(A[i][j]!=0) { unit=false;  break; }
		}		
}
	if(unit)  printf("\nIt is unit matrix");
	else printf("\nIt is not unit matrix");
	
	
	
	
	return 0;
}
