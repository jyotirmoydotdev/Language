#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//input
	int num,power;

	cout<<"Enter number : ";
	cin>>num;
	cout<<"Enter power : ";
	cin>>power;

	int result=pow(num,power);
	cout<<"Answer : "<<result<<endl;

	return 0;
}
