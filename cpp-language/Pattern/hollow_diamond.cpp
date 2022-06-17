#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;

	for(int i=1,s1=row;i<=row;i++,s1--){
		for (int s=s1;s>=2;s--){
			cout<<" ";
		}
		for (int l=2;l<=i;l++){
			if(l==2){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		for (int l=1;l<=i;l++){
                        if(l==i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for (int i=row,s1=1;i>=1;i--,s1++){
		for (int s=2;s<=s1;s++){
			cout<<" ";
		}
		for (int l=i;l>=1;l--){
			if(l==i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		for (int l=i;l>=2;l--){
			if(l==2){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
