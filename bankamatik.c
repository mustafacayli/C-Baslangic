#include<stdio.h>


int main() {
	
	
	
	int islem;
	int bakiye = 1000;
	int tutar;
	
	
	printf("islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
	 
	printf("Islem Seciniz");	
	scanf("%d",&islem);
	
	switch(islem) {
		case 1 :
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekilecek tutar")
			;scanf("%d",tutar);
			if(tutar > bakiye) {
				printf("Bakiyeniz Yetersiz\n");
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d",bakiye);
			break;
		case 2 :
		    printf("Bakiyeniz: %d\n",bakiye);
		    printf("Yatirilacak Tutar\n");
		    scanf("%d",&tutar);
		    
		    bakiye += tutar;
		    printf("Bakiyeniz: %d",bakiye);
		    break;   
		
		case 3 :
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale Yapilacak Tutar");
			scanf("%d",&tutar);
			if (tutar > bakiye){
				printf("Bakiyeniz Yetersiz");
			}
		bakiye -= tutar;
		printf("Bakiyeniz: %d",bakiye);
		break;
		
		case 4 :
		printf("Bakiyeniz : %d",bakiye);
		
		break;
				
		
		case 5 :
			printf("Kart Iade Edildi.\n");
		break;
		default :
		printf("Bilinmeyen Islem Yaptiniz");
		
		
		break;			
			
			
	}



	/*
	switch case'de break bulana kadar case case dolaşır
	*/
		
		
		
		
	
	
	return 0;
}

