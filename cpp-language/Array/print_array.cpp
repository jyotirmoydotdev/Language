#include<iostream>
using namespace std;

int main(){
	//first we need to take the array size
	int size=0;
	cout<<"Enter your list size : ";
	cin>>size;
	int size1=size-1;
	int arr[size1];

	//inserting element in array
	for (int i=0;i<=size1;i++){
		cout<<"Enter "<<i<<" element : ";
		cin>>arr[i];
	}
	
	//printing the array
	for (int i=0;i<=size1;i++){
		cout<<arr[i]<<", ";
	}
	cout<<endl;
	return 0;
}
