#include<iostream>
using namespace std;

// creating a class
class student{
	// we can access the data which is present in the public
	public :
		string name;
		int sclass;
		int rollno;
};

int main(){
	
	// first we need to create the class
	student student1;
	// next we need to put value
	student1.name="Joy Barman";
	student1.sclass=9;
	student1.rollno=33;

	// now we can access the value
	cout<<student1.name<<endl;
	return 0;
}
