#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for (int i=1,z=row;i<=row;i++,z--){
		for(int j=z;1<=j;j--){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
