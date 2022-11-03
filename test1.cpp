#include<stdio.h>
#include<math.h>
int main() {
	
	
	int a,b,c;
	int x1,x2;
	int delta;
	
	printf("Denklemin a'sini giriniz");
	scanf("%d",&a);
	printf("Denklemin b'sini giriniz");
	scanf("%d",&b);
	printf("Denklemin c'sini giriniz");
	scanf("%d",&c);
	
	delta=b*b -4*a*c;
	
	x1= ((-b+(sqrt(delta)))/2*a);
	x2= ((-b-(sqrt(delta)))/2*a);
	
	printf("Denkelmin birinci koku%d\n Denkelmin ikinci koku%d",x1,x2);
	
	
	
	return 0;
}
