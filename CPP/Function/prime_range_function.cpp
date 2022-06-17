#include<iostream>
#include<math.h>
using namespace std;


bool isprime(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int a,b;
	cout<<"Start from : ";
	cin>>a;
	cout<<"End : ";
	cin>>b;

	for (int i=a;i<=b;i++){
		if(isprime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}

