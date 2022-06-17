#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of the array : ";
	cin>>size;

	int arr[size];

	//inputing in array
	for (int i=0;i<size;i++){
		cout<<"Enter your "<<i<<" element : ";
		cin>>arr[i];
	}

	//sorting the array
	for (int i=0; i<size-1; i++){
		for(int j=i+1; j<size; j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	//print the array
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
