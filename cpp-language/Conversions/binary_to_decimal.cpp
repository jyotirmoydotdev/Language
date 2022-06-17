//GitHub : jyotirmoybarman

#include<iostream>
using namespace std;

int binaryToDecimal(int n){
	int ans=0,x=1;
	while (n>0){
		int y= n%10;// To get last number
		ans +=x*y;
		x *= 2;
		n /=10;// To remove the last number
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter your binary number : ";
	cin>>n;

	cout<<binaryToDecimal(n)<<endl;
	return 0;
}
