#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cout<<"Enter size for an array : ";
	cin>>n;

	int arr[n];
	for (int i=0;i<n;i++){
		cout<<"Enter "<<i<<" element : ";
		cin>>arr[i];
	}

	int max_=INT_MIN;
	int min_=INT_MAX;
	
	for (int i=0;i<n;i++){
		if (arr[i]>max_){
			max_=arr[i];
		}
		if (arr[i]<min_){
			min_=arr[i];
		}
	}
	cout<<"Max number : "<<max_<<endl;
	cout<<"Min number : "<<min_<<endl;


	return 0;
}

