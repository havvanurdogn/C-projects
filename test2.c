#include<stdio.h>
int main()
{
	float y,z;
	char x;
    printf("Please enter a transactions:");
    scanf("%c",&x);
    printf("Please enter two values:");
    scanf("%f %f",&y,&z);
    switch(x)
    {
    	case '*' : printf("%.2f",y*z);
    	break;
    	
    	case '/' : printf("%.2f",y/z);
    	break;
    	
    	case '+' : printf("%.2f",y+z);
    	break;
    	
    	case '-' : printf("%.2f",y-z);
    	break;
    	
    	default : printf("You enter wrong character:::");
	}
    
	
	return 0;
}
