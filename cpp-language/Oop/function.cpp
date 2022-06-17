#include<iostream>
using namespace std;

class student{
	public:
		string name;
		int sclass;
		int rollno;
	student(string aname,int aclass,int arollno){
		name=aname;
		sclass=aclass;
		rollno=arollno;
	}
	
	// this function is to check if a student is senior
	bool senior(){
		if(sclass>8){
			return true;
		}
	return false;
	}
};

int main(){
	
	student joy("Joy Barman",9,23);
	student jyotirmoy("Joytirmoy Barman",13,23);
	student aman("Aman giri",12,24);

	if (joy.senior()==1){
		cout<<"joy is a senior"<<endl;
	}
	return 0;
}
