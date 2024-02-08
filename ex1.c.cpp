#include<stdio.h>
float operation(char ch, float a, float b)
{
	printf("Please choose a character to operate with two number:\n");
	scanf("%c",&ch);
	printf("Please enter two float number:\n");
	scanf("%f %f",&a,&b);
	
	
	switch(ch)
	{
		case '+' : { return a+b;
			break;
		}
		case '-' : { return a-b;
			break;
		}
		case '*' : { return a*b;
			break;
		}
		case '/' : { return a/b;
			break;
		}
	}
	
}
int main()
{
	float a,b,r;
	char ch;
	r=operation(ch,a,b);
	
	printf("Result is %.2f",r);
	
	
	return 0;
}
