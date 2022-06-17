// Run again program
// date : 30-05-21

#include<iostream>
using namespace std;

int main(){
	
	string c="y";
	while (c=="y"){
	
		//CODE HERE

		cout<<"\nRun agian (y/n): ";
		cin>>c;
		if (c!="y"){
			break;
		}
	}

	return 0;
}
