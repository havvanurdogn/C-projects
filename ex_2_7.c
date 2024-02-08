#include<stdio.h>
int main()
{
	float rb,bd;
	rb=1042;
	bd=2272;
	int year=0;
	while(rb<bd)
	{
		rb+=rb*3.8/100;
		bd+=bd*1.2/100;
		year++;
	}
	
	printf("Numbers of rabbit will be more than numbers of bird then %d year.\n",year);
	
	return 0;
}
