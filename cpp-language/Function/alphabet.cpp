#include<iostream>
using namespace std;

void alpha(char x){
	if (x>='a' and x<='z' or x>='A' and x<='Z'){
		cout<<x<<" is a alphabet."<<endl;
	}
	else{
		cout<<x<<" is not a alphabet."<<endl;
	}
	return;
}

int main(){
	char x;
	cout<<"Enter your character : ";
	cin>>x;

	alpha(x);
	return 0;
}
