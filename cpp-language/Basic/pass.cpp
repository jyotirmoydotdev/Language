#include<iostream>
using namespace std;

int main(){
	int m1,m2,m3,m4,m5;

	cout<<"English : ";
	cin>>m1;
	cout<<"Maths : ";
	cin>>m2;
	cout<<"Physics : ";
	cin>>m3;
	cout<<"Chemistry : ";
	cin>>m4;
	cout<<"computer science : ";
	cin>>m5;

	int result=(m1+m2+m3+m4+m5)/5;
	
	cout<<"Percentage : "<<result<<endl;

	if (result>=60){
		cout<<"Pass";
	}
	else
		cout<<"Fail";
	cout<<endl;
	return 0;
}
