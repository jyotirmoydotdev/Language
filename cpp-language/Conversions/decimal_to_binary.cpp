#include<iostream>
using namespace std;

int decimalToBinary(int n){
	
	int ans=0;
	int x=1;
	while(x<=n){
		x*=2;
		cout<<"X is : "<<x<<endl;
	}
	x/=2;
	
	while(x>0){
		int lastdigit =n/x;
		n-=lastdigit*x;
		x/=2;
		ans = ans*10+lastdigit;
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter your decimal number : ";
	cin>>n;

	cout<<decimalToBinary(n)<<endl;
	return 0;
}
