#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for(int i=1,j=row;i<=row;i++,j--){
		for(int s=j;s>=2;s--){
			cout<<" ";
		}
		for (int l=1;l<=i;l++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
