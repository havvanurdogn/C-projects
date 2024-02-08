#include<stdio.h>
int main()
{
	char o;
	float r;
	int a,b;
	printf("Please choose the operation;'+' or'-' that you want to use:\n ");
	scanf("%c",&o);
	printf("Please enter two integers:\n");
	scanf("%d %d",&a,&b);
	if(a==0 || b==0) printf("Codes are donot work.\n");
	else{
		switch(o)
	{
		case '+':{
			printf("Result is %d/%d.\n",(a+b),a*b);
			break;
		} 
		          
		case '-':{
			printf("Reasult is %d/%d.\n",(a-b),a*b);
			break;
		} 
		          
		default :{
			printf("You entered wrong character.\n");
			break;
		} 
	}
	}
	
	
	
	
	return 0;
}
