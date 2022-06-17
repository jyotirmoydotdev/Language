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
			if(i==1 or i==row){
				cout<<"*";
			}
			else if (l==1 or l==row){
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
