//sum of the sub array
//source : gfg and apni collage

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Array size : ";
	cin>>n;

	int arr[n];
	
	cout<<"Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int result=0,temp=0;

	for(int i=0;i<n;i++){
		temp=0;
		for(int j=i;j<n;j++){
			temp=temp+arr[j];
			result=result+temp;
		}
	}

	cout<<"Result : "<<result<<endl;
	return 0;
}
