#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for(int i=1;i<=row;i++){
		for(int j=row;1<=j;j--){
			if(j-1>=i){
				cout<<"  ";
			}
			else{
				cout<<j<<" ";
			}
		}
		for(int z=2;z<=i;z++){
			cout<<z<<" ";
		}
		cout<<endl;
	}
	return 0;
}
