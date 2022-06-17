#include<iostream>
using namespace std;

int main(){
	//	         0     1     2
	int arr[3][2]={{1,2},{3,4},{5,6}};
	//	        0 1   0 1   0 1
	
	cout<<arr[0][1]<<endl;

	// WE CAN EXTEND THIS TO ND ARRAY
	// EXAMPLE :
	
	int arr2[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
	cout<<arr2[1][1][1];
	return 0;
}
