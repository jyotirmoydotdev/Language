#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for(int i=1,s1=row;i<=row;i++,s1--){
		for (int s=s1;s>=1;s--){
			cout<<"*";
		}
		for (int l=2;l<=i;l++){
			cout<<" ";
		}
		for (int l=1;l<=i;l++){
			cout<<" ";
		}
		for (int s=s1;s>=1;s--){
			cout<<"*";
		}
		cout<<endl;
	}
	for (int i=row,s1=1;i>=1;i--,s1++){
		for (int s=1;s<=s1;s++){
			cout<<"*";
		}
		for (int l=i;l>=1;l--){
			cout<<" ";
		}
		for (int l=i;l>=2;l--){
			cout<<" ";
		}
		for(int s=1;s<=s1;s++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
