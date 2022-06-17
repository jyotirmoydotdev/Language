#include<iostream>
using namespace std;

int main(){
	int num,i,a;
	cout<<"Enter number : ";
	cin>>num;

	for (int a=2;a<=num;a++){
		for(i=2;i<a;i++){
			if(a%i==0){
				break;
			}
		}
		if(i==a){
			cout<<a<<endl;
		}
	}
	return 0;
}

