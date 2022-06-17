#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for(int i=1,j=row;i<=row;i++,j--){
		for(int k=1;k<=i;k++){
			cout<<"* ";
		}
		for(int s=j;s>=2;s--){
			cout<<"  ";
		}
		for(int s=j;s>=2;s--){
			cout<<"  ";
		}
		for(int k=1;k<=i;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1,j=row;i<=row;i++,j--){
		for(int s=j;s>=1;s--){
			cout<<"* ";
		}
		for (int k=2;k<=i;k++){
			cout<<"  ";
		}
		for (int k=2;k<=i;k++){
			cout<<"  ";
		}
		for (int s=j;s>=1;s--){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
