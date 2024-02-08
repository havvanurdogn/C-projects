#include<stdio.h>
float convert(float f)
{
	float celcious;
	celcious = (5/9)*(f-32);
	return celcious;
}




int main()
{
	printf("This program is converted Fahreneheit to celcious.\n");
	float c,f;
	printf("Please enter the Fahreneheit degree:\n");
	scanf("%f",&f);
	c=convert(f);
	printf("Celcious degree is %f\n",c);
	
	
	return 0;
}
