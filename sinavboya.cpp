#include<stdio.h>
int main(){
	int raf_sayisi,toplam;
	char boya_rengi[100];
	
	printf("lutfen boya rengini seciniz(kirmizi,sari,gri):\n");
	gets(boya_rengi);
	printf("lutfen raf sayisini giriniz:");
	scanf("%d",&raf_sayisi);
	
	if(boya_rengi == "kirmizi"){
		toplam = (raf_sayisi*30) +200;
	}
	else if(boya_rengi == "sari"){
		toplam = (raf_sayisi*35) +200;
	}
	else if(boya_rengi == "gri"){
		toplam = (raf_sayisi*20) +200;
	}
	else{
		printf("hatali secim tekrar deneyiniz...");
	}
	
	printf("Toplam tutar = %d",toplam);
	 
	
	
	
	
	return 0;
}
