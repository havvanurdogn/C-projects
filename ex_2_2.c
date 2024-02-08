#include<stdio.h>
int main()
{
	float min,pay;
	printf("How many minute you talked?\n");
	scanf("%f",&min);
	if (min==3) pay=0.25;
	else if (min>3) pay=((min-3)*0.08)+0.25;
	printf("You must pay %.2f dollars.\n",pay);
	
	return 0;
}
