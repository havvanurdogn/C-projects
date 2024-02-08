#include<stdio.h>
int main()
{
	int code;
	float price,pay;
	printf("Please enter the code that you want to buy good:\nFor books code is 0.\nFor staple foods code is 1.\nFor luxuary goods code is 2.\n");
	scanf("%d",&code);
	printf("Please enter the good's price:\n");
	scanf("%f",&price);
	switch(code)
	{
		case 0:{ pay=price+price*4.0/100;
		    printf("You must pay %.2f for book.\n",pay);
			break;
		}
		case 1:{ pay=price+price*5.6/100;
		    printf("You must pay %.2f for staple food.\n",pay);
			break;
		}
		case 2:{ pay=price+price*19.6/100;
		    printf("You must pay %.2f for luxuary good.\n",pay);
			break;
		}
		default: printf("You entered wrong code.\nPlease  try again!!!");
		break;
	}
	
	
	return 0;
}
