#include<stdio.h>

int x=30;

void showx(void);

int main()
{
	extern int x;
	printf("\n%d",x++);
	showx();
}
void showx(){
	extern int x;
	printf("\n%d",x);
}
