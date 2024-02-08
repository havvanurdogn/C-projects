#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num1,num2;
	char surname;
	printf("Please enter 2 float values and your surname title:");
	scanf("%f %f %c",&num1,&num2,&surname);
	printf("First value is %.2f second value is %.2f and my surname title is %c",num1,num2,surname);
	
	return 0;
}
