#include<iostream>
using namespace std;

int main(){
	int p,i,t;
	cout<<"Enter the Principal amount : ";
	cin>>p;
	
	cout<<"Enter the Interest rate : ";
	cin>>i;

	cout<<"Enter the Time : ";
	cin>>t;

	int s;
	s=(p*i*t)/100;

	cout<<"The simple interest is "<<s<<endl;
	return 0;

}
