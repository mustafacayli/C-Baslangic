#include<stdio.h>

int main() {
	
	
	int toplam =0;
	int i;
	
	for(i=0;i<=99;i++){
		if (i%3 ==1){
			continue;
		}
		else if (i%3 ==2){
			continue;
		}
		
		toplam +=i;
	} 
	printf("%d",toplam);
	
	
	
	
	
	return 0;
}
