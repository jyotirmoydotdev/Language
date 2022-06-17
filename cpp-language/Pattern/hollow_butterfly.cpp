#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for(int i=1,j=row;i<=row;i++,j--){
		for(int k=1;k<=i;k++){
			if (k==1 or k==i ){
			cout<<"* ";
			}
			else {
				cout<<"  ";
			}
		}
		for(int s=j;s>=2;s--){
			cout<<"  ";
		}
		for(int s=j;s>=2;s--){
			cout<<"  ";
		}
		for(int k=1;k<=i;k++){
			if(k==1 or k==i){
			cout<<"* ";
			}
			else {
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	for(int i=1,j=row;i<=row;i++,j--){
		for(int s=j;s>=1;s--){
			if(s==j or s==1){
			cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		for (int k=2;k<=i;k++){
			cout<<"  ";
		}
		for (int k=2;k<=i;k++){
			cout<<"  ";
		}
		for (int s=j;s>=1;s--){
			if(s==j or s==1){
			cout<<"* ";
			}
			else {
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
