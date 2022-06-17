#include<stdio.h>

int main(){
	int a=55,b=5;
	int c=55+5,d=55-5;
	printf("%d + %d = %d \n",a,b,c);
	printf("%d - %d = %d \n",a,b,d);
	int e=14,f=2;
	printf("%d * %d = %d \n",e,f,e*f);
	printf("%d / %d = %d \n",e,f,e/f);
	
	int x;
	x=e%f;
	printf("%d %% %d = %d \n",e,f,x);
	
	int g=3;
	int x2=-e%g;
	printf("- %d %% %d = %d \n",e,g,x2);
	int x3=e%g;
	printf("%d %% %d = %d \n",e,g,x3);
	printf("6 / 7 = %d \n",6/7);
}
