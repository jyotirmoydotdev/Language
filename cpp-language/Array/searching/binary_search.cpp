#include<iostream>
using namespace std;

//function will only return the index number or -1
int binarysearch(int arr[], int size, int key){
	int s=0;
	int e=size;

	while (s<=e){
		int mid=(s+e)/2;

		if (arr[mid]==key){
			return mid;
		}
		else if (arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return -1;
}

int main(){
	//inputing size of the array
	int size;
	cout<<"Enter your array size : ";
	cin>>size;

	int arr[size];

	//inputing in the array
	for (int i=0;i<size;i++){
		cout<<"Enter your "<<i<<" element : ";
		cin>>arr[i];
	}
	
	//reciving the key
	cout<<"Enter your key : ";
	int key;
	cin>>key;
	
	//calling the function
	int ans=binarysearch(arr,size,key);
	
	//reslut
	if (ans>=0){
		cout<<"your key is in "<<ans<<" index"<<endl;
	}
	else{
		cout<<"Your key does not exist"<<endl;
	}
	return 0;
}
