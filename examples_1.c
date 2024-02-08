#include<stdio.h>
int main()
{
	int a,b,h,yanal,toplam,taban,hacim;
	printf("Program dikdortgenler prizmasinin; yanal alanlari toplamini,hacmini,toplam alanini,taban alanini hesaplar.\n");
	printf("Lütfen dikdortgen prizmasini kenar uzunluklarini ve yuksekligini giriniz:");
	scanf("%d %d %d",&a,&b,&h);
	taban=a*b;
	yanal=2*h*(a+b);
	hacim=a*b*h;
	toplam=taban*2+yanal;
	printf("Yanal alanlar toplami %d dir.\n",yanal);
	printf("Taban alani %d dir.\n",taban);
	printf("Toplam alani %d dir.\n",toplam);
	printf("Hacmi %d dir.\n",hacim);
	
	
	
	
	return 0;
}
