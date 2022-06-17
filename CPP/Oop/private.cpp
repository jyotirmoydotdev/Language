// Using of private
#include<iostream>
using namespace std;

class student{
	private:
		string character;
	public:
		string name;
		int classs;
		int rollno;
	student(string aname,int aclasss,int arollno,string acharacter){
		name=aname;
		classs=aclasss;
		rollno=arollno;
		setcharacter(acharacter);
	}

	void setcharacter(string acharacter){
		if(acharacter=="good" || acharacter=="bad")
			character=acharacter;
		else
			character="not a characteristic";
	}
	string getcharacter(){
		return character;
	}
};


int main(){
	
	student joy("Joy barman",9,23,"good");
	student aman("aman giri",12,32,"hey");

	cout<<aman.getcharacter()<<endl;
	return 0;
}
