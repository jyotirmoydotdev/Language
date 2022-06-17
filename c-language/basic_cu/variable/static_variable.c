#include<stdio.h>
void display();
int main(){
	display();
	display();
	display();
}
void display(){
	static int c=0;
	printf("%d\n",c);
	c+=5;
}
