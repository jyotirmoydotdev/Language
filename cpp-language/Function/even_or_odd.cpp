#include<iostream>
using namespace std;

void eo(int n){
	if(n%2==0){
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}
	return;
}

int main(){
	int n;
	cout<<"Enter number : ";
	cin>>n;

	eo(n);

	return 0;
}
