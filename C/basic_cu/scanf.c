//This file is to understand the input
/*
 * %d for integer number	int
 * %c for character		char
 * %f for float			float
 * %s for string		str
 * %o for octal
 * %x for hexadecimal
 * %u for unsigned int
 * %ld for long int
 * %lf for double
 * %Lf for long double
 */


#include<stdio.h>

int main(){
	int integer;
	printf("Enter integer : ");
	scanf("%d",&integer);
	printf("Output%d",integer);

	char ch;
	printf("Enter character : ");
	getchar(ch);
	printf("Output : %d",ch);

	return 0;
}
