// use of constructor

#include<iostream>
using namespace std;

class student{
	public:
		string name;
		int sclass;
		int rollno;
	// we can use cunstructor to short the input process
	student(string aname,int aclass,int arollno){
		name=aname;
		sclass=aclass;
		rollno=arollno;
	}
};

int main(){
	student joy("Joy Barman",9,23);
	student jyotirmoy("Joytirmoy Barman",13,23);

	cout<<joy.rollno<<endl;
	return 0;
}
