#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter number : ";
	cin>>num;

	for(int i=1;i<=3;i++){
		for(int j=1;j<=num;j++){
			if ((i+j)%4==0){
				cout<<"* ";
			}
			else if(i==2 and j%2==0){
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

