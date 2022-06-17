#include<iostream>
using namespace std;

string legalage(int n){
	if (n<18){
		return "No";
	}
	else{
		return "Yes";
	}
}

int main(){
	int n;
	cout<<"Enter your age : ";
	cin>>n;

	cout<<"Eligible for vote : "<<legalage(n)<<endl;
	
	return 0;
}
