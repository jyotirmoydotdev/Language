#include<iostream>
using namespace std;

int main(){
	int row;
	cout<<"Enter row : ";
	cin>>row;
	
	int co=1;
	for (int i=0,k=row;i<=row;i++,k--){
		for (int s=k;s>=1;s--){
			cout<<" ";
		}
		for (int j=0;j<=i;j++){
			if (j==0 or i==0){
				co=1;
			}
			else {
				co=co*(i-j+1)/j;
			}
			cout<<co<<" ";
		}
		cout<<endl;
	}
	return 0;
}
