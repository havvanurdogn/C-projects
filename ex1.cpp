#include<stdio.h>
float operation(char ch, float a, float b, float *r)
{
	printf("Please choose a character to operate with two number:\n");
	scanf("%c",&ch);
	printf("Please enter two float number:\n");
	scanf("%f %f",&a,&b);
	
	
	switch(ch)
	{
		case '+' : { *r= a+b;
			break;
		}
		case '-' : { *r= a-b;
			break;
		}
		case '*' : { *r= a*b;
			break;
		}
		case '/' : { *r= a/b;
			break;
		}
	}
	
}
int main()
{
	float a,b,r;
	char ch;
	operation(ch,a,b,&r);
	
	printf("Result is %.2f",r);
	
	
	return 0;
}
