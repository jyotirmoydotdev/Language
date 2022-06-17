#include<iostream>
using namespace std;

int main(){
	float n1,n2;
	string op;
	
	cout<<"Enter 1st number : ";
	cin>>n1;
	cout<<"Enter operator   : ";
	cin>>op;
	cout<<"Enter 2nd number : ";
	cin>>n2;

	if(op=="+")
		cout<<"Result : "<<n1+n2<<endl;
	else if (op=="-")
		cout<<"Result : "<<n1-n2<<endl;
	else if (op=="/")
		cout<<"Result : "<<n1/n2<<endl;
	else if (op=="*")
		cout<<"Result : "<<n1*n2<<endl;
	else if (op=="<"){
		if(n1<n2)
			cout<<"Result : True "<<endl;
		else
			cout<<"Result : False "<<endl;
	}
	else if (op==">"){
		if(n1>n2){
			cout<<"Result : True "<<endl;
		}
		else
			cout<<"Result : False "<<endl;
	}
	else
		cout<<"Please enter a valid number";

	return 0;
}
