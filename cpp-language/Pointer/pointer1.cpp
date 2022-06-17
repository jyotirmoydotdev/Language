// Print pointer address
// Pointer address is the address of the value in the physical ram
// Values store in ram

#include<iostream>
using namespace std;

int main(){
	int age=19;
	string name="Jyotirmoy Barman";

	cout<<"Age : "<<age<<endl;
	cout<<"Name : "<<name<<endl;

	cout<<"Age address : "<<&age<<endl;
	cout<<"Name address : "<<&name<<endl;

	return 0;
}
