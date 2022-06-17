#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of the array : ";
	cin>>size;
	
	int arr[size];

	//inserting in array
	for (int i=0;i<size;i++){
		cout<<"Enter index "<<i<<" : ";
		cin>>arr[i];
	}

	return 0;
}
