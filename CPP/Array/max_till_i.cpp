//name : Jyotirmoy Barman
//github : jyotirmoybarman
//question : Given an array a[] of size n. For every i from 0to n-1 output max(a[0],a[1],.......a[i]).

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	int arr[n];
	//inserting elements in array
	for(int i=0;i<n;i++){
		cout<<"Enter your "<<i<<" element : ";
		cin>>arr[i];
	}

	int mx=-199999999;
	
	for(int i=0;i<n;i++){
		int mx=max(mx,arr[i]);
		cout<<mx<<" ";
	}
	cout<<endl;
	return 0;
}
