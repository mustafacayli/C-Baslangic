#include<stdio.h>

int main() {
	
	/*
	1234 rakamlar� toplam�n� versin ,ka� haneli oldu�unu versin
	*/
	
	int n,hane =0,toplam=0;
	
	printf("Sayiyi Giriniz");
	scanf("%d",&n);
	
	do {
		
		toplam += (n%10);
		
		hane++;
		
		n =n/10;		
	}
	while(n>0);
	
	printf("Rakamlar Toplami %d\n %d Haneli",toplam,hane);
	
	
	
	
	
	return 0;
}
