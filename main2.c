#include<stdio.h>

int main() {
	
	

	
	
    int	x = 5;
	int y = 2;
	int z = 7;
	printf("x:%d y:%d z:%d\n",--x,++y,z++);
	printf("x:%d y:%d z:%d\n",x,y,z);
	printf("x:%d y:%d z:%d\n",x--,--y,z--);
	printf("x:%d y:%d z:%d\n",x,y,z);
	printf("x:%d y:%d z:%d\n",x,y,z);
	
	
	/*
	x =3 z =7 y =2
	
	x = x + (z+1)
	
	
	*/
	x += z+1;
	
	printf("%d\n",x);
	
	x = y = z+5;
	
	;printf("x:%d y:%d z:%d\n",x,y,z);
	
	
	
	
	
	
	
	
	;return 0;
}
