#include<iostream>
using namespace std;

int main(){
	int arr[3][2]={{1,2},{2,3},{3,4}};

	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}

	cout<<endl;
	
	int arr2[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};

	for(int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			for (int k=0;k<2;k++){
				cout<<arr2[i][j][k];
			}
			cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
