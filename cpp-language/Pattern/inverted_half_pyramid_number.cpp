#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;


	for(int i=row;1<=i;i--){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
