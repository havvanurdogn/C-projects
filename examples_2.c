#include<stdio.h>
int main()
{
	int x,y,z,max,min;
	printf("Please enter three values:\n");
	scanf("%d %d %d",&x,&y,&z);
	max=x;
	if(y>max) 
	{
		
		max=y;
	}
	if(z>max)
	{
		
		max=z;
	}
	
	printf("%d is maximum value.\n",max);
	min=x;
	if(y<min)  min=y;
	
	if(z<min)  min=z;
	
	printf("%d is minimum value.\n",min);
	
	
	return 0;
}
