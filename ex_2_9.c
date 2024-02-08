#include<stdio.h>
int main()
{
	int code;
	float pr,py;
	printf("Please enter the code that you want to buy good:\nFor books code is 0.\nFor staple foods code is 1.\nFor luxuary goods code is 2.\n");
	scanf("%d",&code);
	printf("Please enter the good's price:\n");
	scanf("%f",&pr);
	if(code==0){ py=pr+pr*4.0/100;
	printf("You must pay %.2f for book.\n",py);
	}
	else if(code==1){ py=pr+pr*5.6/100;
	printf("You must pay %.2f for staple food.\n",py);
	}
	else if(code==2){ py=pr+pr*19.6/100;
	printf("You must pay %.2f for luxuary good.\n",py);
	}
	else printf("You entered wrong code.\nPlease  try again!!!");
	
	
	
	return 0;
}
