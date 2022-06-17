#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number : ";
	cin>>num;

	int sum=0;

	for (int i=0;i<=num;i++){
		sum=sum+i;
	}
	cout<<"The sum of "<<num<<" is "<<sum<<endl;
	return 0;
}
