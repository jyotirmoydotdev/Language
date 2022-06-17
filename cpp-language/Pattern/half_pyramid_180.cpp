#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for (int i=1,z=row;i<=row;i++,z--){
		for (int space=z;space>=1;space--){
			cout<<"  ";
		}
		for (int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
