#include<iostream>
using namespace std;

class car{
	public:
/*
		string colour;
		string number;
	car(string acolour,string anumber){
		colour=acolour;
		number=anumber;
	}
*/
	void wheels(){
		cout<<"This car has four wheels"<<endl;
	}
	void engine(){
		cout<<"This car has one engine"<<endl;
	}
};

// 	     inheratng functions from car
class tesla : public car{
	
};

int main(){
	
	tesla teslacar;
	teslacar.wheels();
	return 0;
}
