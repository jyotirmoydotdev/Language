#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for (int i=row;1<=i;i--){
		for(int j=i;1<=j;j--){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
