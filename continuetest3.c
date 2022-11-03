#include<stdio.h>

int main() {
	
	int i;
	int toplam =0;
	
	for (i=0;i <=100;i++){
		if (i%4 ==1){
			continue;
		}
		else if(i%4 ==2){
			continue;
		}
		else if(i%4 ==3){
			continue;
		}
		toplam +=i;
		
	}
	printf("%d\n",toplam);
	
	
	
	
	
	for(i=0;i<=100;i++){
		
		if(i%10 ==1){
			continue;
		}
		else if(i%10 ==2){
			continue;
		}
		else if(i%10 ==3){
		    continue;
		}
		else if(i%10 ==4){
			continue;
		}
		else if(i%10 ==5){
			continue;
		}
		else if(i%10 ==6){
			continue;
		}
		else if(i%10 ==7){
			continue;
		}
		else if(i%10 ==8){
			continue;
		}
		else if(i%10 ==9){
			continue;
		}
		
		toplam +=i;
		
		
	}

	printf("%d",toplam);
	
	
	return 0;
}








