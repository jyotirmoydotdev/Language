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
		rank();
	}
	
	void rank(){
		if (sclass>8){
			cout<<name<<" is senior"<<endl;
		}
		else
			cout<<name<<" is junior"<<endl;
	}
};

int main(){
	
	student joy("Joy Barman",9,23);
	student jyotirmoy("Joytirmoy Barman",13,23);
	student aman("Aman giri",12,24);
	
	/*
	if (joy.senior()==1){
		cout<<"joy is a senior"<<endl;
	}
	*/
	return 0;
}
