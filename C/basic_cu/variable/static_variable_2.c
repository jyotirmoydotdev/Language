#include<stdio.h>
void call_me(void);

int main(){
	call_me();
	call_me();
	call_me();
	call_me();
}

void call_me(){
	static int i=5;
	printf("%d\n",i++);
}
