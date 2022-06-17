#include<iostream>
using namespace std;

void print(int c){
        cout<<c<<endl;
	return ;
}

int add(int a,int b){
        int sum=a+b;
        print(sum);
	return sum;
}


int main(){
	int num1,num2;
	cout<<"Enter 1st number : ";
	cin>>num1;

	cout<<"Enter 2nd number : ";
	cin>>num2;

	add(num1,num2);
	return 0;
}

