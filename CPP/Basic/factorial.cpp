#include<iostream>
using namespace std;

int main(){
	int n,mult=1;
	cout<<"Enter the factorial number !n : ";
	cin>>n;

	for (int i=1;i<=n;i++){
		mult=mult*i;
	}
	cout<<mult<<" is the factorial of "<<n<<"!"<<endl;
	return 0;
}
