#include<stdio.h>
void calc(int sec , int min , int hour)
{
	min=sec/60;
	sec=sec%60;
	hour=min/60;
	min=min%60;
	printf("%d : %d : %d\n",hour,min,sec);
}
int main()
{
	int sec,hour,min;
	printf("Please enter second that calculates like that hour : min : sec\n");
	scanf("%d",&sec);
	calc(sec,min,hour);
	return 0;
}
