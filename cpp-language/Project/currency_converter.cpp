#include<iostream>
using namespace std;

int main(){
	string c="y";
	while(c=="y"){
	float ruppes=1,doller=0.0136,yen=1.4928,won=15.9179,euro=0.0116;
	cout<<"Enter in Indian Ruppes : ";
	cin>>ruppes;

	cout<<"America doller : "<<ruppes*doller<<endl;
	cout<<"Japan   yen    : "<<ruppes*yen<<endl;
	cout<<"South-korea won: "<<ruppes*won<<endl;
	cout<<"Europe  euro   : "<<ruppes*euro<<endl;
	cout<<"Run again (y/n): ";
	cin>>c;
	cout<<endl;
	}
	return 0;
}
