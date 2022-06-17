#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter your 1st number : ";
	cin>>a;
	cout<<"Enter your 2nd number : ";
	cin>>b;
	cout<<"Enter your 3rd number : ";
	cin>>c;

	if(a>b and a>c){
		cout<<a<<" is the max number."<<endl;
	}
	else if(b>a and b>c){
		cout<<b<<" is the max number."<<endl;
	}
	else {
		cout<<c<<" is the max number."<<endl;
	}
	return 0;
}
