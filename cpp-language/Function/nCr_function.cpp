#include<iostream>
using namespace std;


int fact(int n){
	int factorial=1;
	for (int  i=2;i<=n;i++){
		factorial*=i;
	}
	return factorial;
}

int main(){
	int n,r;
	cout<<"Enter number : ";
	cin>>n;
	cout<<"Enter 2nd number : ";
	cin>>r; 

	float ans= fact(n)/(fact(r)*(fact(n-r)));
	cout<<ans<<endl;
	return 0;
}
