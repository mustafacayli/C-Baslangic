#include<stdio.h>


int main () {
	
	
	
	
	int vize1,vize2,final;
	float dersort;
	
	float ortalama;
	
	printf("Birinci vize notunuzu giriniz");
	scanf("%d",&vize1);
	printf("Ikinci vize notunuzu giriniz");
	scanf("%d",&vize2);
	printf("Final notunuzu giriniz");
	scanf("%d",&final);
	printf("Universite ortalamasi kac");
	scanf("%f",&ortalama);	
	dersort = (vize1 + vize2 + final) /3.0	
	
	;if (dersort > 60) {
		
		printf("Dersten gectiniz.");
		
		
		
		
	}	
	
	else if (dersort > 40) {
		printf("Dersten bute kaldiniz\n");
		
		if (ortalama < 2.5) {
			
			printf("Butu gecsen bile dersi seneye tekrar almalisin,cunku ortamalan dusuk");
		}
		
	}
	else {
	
	
	
	
	
	
	printf("Kaldiniz");	
	}
	
	
	
		
	return 0;
}
