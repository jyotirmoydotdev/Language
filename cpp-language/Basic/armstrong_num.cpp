#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number  : ";
	cin>>num;

	int last,a,b=0,g=num;

	while(num>0){
		last=num%10;
		a = last*last*last;
		b=a+b;
		num=num/10;
	}
	if(g==b){
	cout<<"It is a armstrong number"<<endl;
	}
	else {
		cout<<"It is not a armstrong nunber"<<endl;
	}
	return 0;
}
