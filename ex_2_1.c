#include<stdio.h>
int main()
{
	int a,b,c;
	printf("This program is decided a triangle is equilateral or isosceles or scalene with you entered 3 angles.\n");
	printf("Please enter three angles:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c!=180) printf("That is not a triangle.\n");
	else{
		if(a==b && a==c) printf("This is a triangle that equilateral.\n") ;
		else if (a==b && b!=c) printf("This is a triangle that isosceles.\n") ;
		else if (b==c && a!=c) printf("This is a triangle that isosceles.\n") ;
		else if (a==c && b!=c) printf("This is a triangle that isosceles.\n") ;
		else printf("This is a triangle that scalene.\n");
		
	}
	
	
	
	
	return 0;
}
