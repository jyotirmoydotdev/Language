#include<iostream>
using namespace std;

int main(){
	
	int a11,a12,a21,a22,b11,b12,b21,b22;
	
	system("clear");
	cout<<"Enter the A matrix \n|> ";
	cin>>a11>>a12;
	cout<<"|> ";
	cin>>a21>>a22;
	cout<<endl;

	cout<<"Enter the B matrix \n|> ";
	cin>>b11>>b12;
	cout<<"|> ";
	cin>>b21>>b22;
	cout<<endl;
	
	cout<<"Result\n|> "<<a11+b11<<" "<<a12+b12<<endl;
	cout<<"|> "<<a21+b21<<" "<<a22+b22<<endl;
	cout<<endl;
	return 0;
}
