#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
	
	for (int i=0;i<n;i++){
		if (arr[i]==key){
			return i;
		}
	}
	return -1;

}

int main(){
	int size;
	cout<<"Enter your array size : ";
	cin>>size;
	int arr[size];

	for (int i=0;i<size;i++){
		cout<<"Enter your "<<i<<" element : ";
		cin>>arr[i];
	}

	int key;
	cout<<"Enter your key : ";
	cin>>key;

	int ans=linearSearch(arr,size,key);

	if (ans>=0){
		cout<<"Your key is in "<<ans<<" index."<<endl;
	}
	else{
		cout<<"Your key is not here"<<endl;
	}

	return 0;
}
