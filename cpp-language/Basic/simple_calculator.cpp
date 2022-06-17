#include<iostream>
using namespace std;

int main(){
	int n1,n2;
	char op;
	cout<<"Enter your 1st number : ";
	cin>>n1;
	cout<<"Enter your 2nd number : ";
	cin>>n2;

	cout<<"Enter your oparator : ";
	cin>>op;

	switch (op){
		case '+':
			cout<<n1+n2;
			break;
		case '-':
			cout<<n1-n2;
			break;
		case '*':
			cout<<n1*n2;
			break;
		case '%':
			cout<<n1%n2;
			break;

		default :
			cout<<"This oparator is not assign ";
			break;
		}
		cout<<endl;
		return 0;
}
