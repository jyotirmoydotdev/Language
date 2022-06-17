#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double num1,num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;

	double result=fmax(num1,num2);
	cout<<"Answer : "<<result<<endl;

	return 0;
}
