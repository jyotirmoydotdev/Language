#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for(int i=1,j=row;i<=row;i++,j--){
		for(int k=j;k>=2;k--){
			cout<<" ";
		}
		for (int l=1;l<=row;l++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
