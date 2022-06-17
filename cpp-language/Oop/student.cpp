#include<iostream>
using namespace std;

class student{
	public :
		string name;
		int standard;
		int rollno;
	student(string aname,int astandard,int arollno){
		name=aname;
		standard=astandard;
		rollno=arollno;
		show();
	}

	void show(){
		cout<<name<<endl;
	}
};

int main(){
	student s1("Jyotirmoy Barman",12,1);
	student s2("Joy Barman",9,2);
	student s3("Aman",12,3);
	return 0;
}
