#include<iostream>
using namespace std;

void swap(int a,int b){
	int c=b;
	b=a;
	a=c;
	cout<<"Now your first number is : "<<a<<endl;
        cout<<"Now your second number is : "<<b<<endl;
	return ;
}

int main(){
	int a,b;
	cout<<"Enter your first number : ";
	cin>>a;
	cout<<"Enter your second number : ";
	cin>>b;
	
	cout<<"\nAfter swap "<<endl;
	swap(a,b);
	return 0;
}
