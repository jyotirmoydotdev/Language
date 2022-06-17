#include<iostream>
using namespace std;

int main(){
	int num,i;
	cout<<"Enter number : ";
	cin>>num;
	
	for (i=2;i<num;i++){
		if(num%i==0){
			cout<<"Non prime"<<endl;
			break;
		}
	}
	if (i==num){
		cout<<"Prime"<<endl;
	}
	return 0;
}
