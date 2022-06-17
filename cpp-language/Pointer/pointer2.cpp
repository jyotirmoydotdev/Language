// storing pointer value in other variable

#include<iostream>
using namespace std;

int main(){
	int age=19;
	string name="Jyotirmoy Barman";
	
	// We put star * to store pointer variable
	int *page=&age;      // storing age pointer value in page
	string *pname=&name; // storing name pointer value in pname

	// To print the address from the variable
	cout<<"Age address : "<<page<<endl;
	cout<<"Name address : "<<pname<<endl;

	// printing the value 
	cout<<"Age : "<<*page<<endl; // By putting * we can get the value
	cout<<"Name : "<<*pname<<endl;

	// If we put & we can get the pointer address back
	// Eg. &*page will give the address again
	
	return 0;
}
