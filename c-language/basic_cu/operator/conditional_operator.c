#include<stdio.h>
#include<string.h>

int main(){
	int i;
	scanf("Entre number : %d",&i);
	char even;
	//even=(i%2==0)?"t":"f";
	if (i%2==0){
		string even="True";
	}
	else
		string even="False";

	pritnf("Answer : %s",even);
}
