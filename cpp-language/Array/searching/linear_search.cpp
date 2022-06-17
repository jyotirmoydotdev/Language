//O(n)

#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter your array size : ";
	cin>>size;

	int array[size];

	for (int i=0;i<size;i++){
		cout<<"Enter "<<i<<" element : ";
		cin>>array[i];
	}

	int key=0;
	cout<<"Enter your key : ";
	cin>>key;
	
	int s=0,j=0;
	for (int s;s<size;s++){
		if (key==array[s]){
			cout<<"your key is in "<<s<<" index."<<endl;
			break;
		}
		j++;
	}
	if (j==size){
		cout<<"Key is not persent here."<<endl;
	}
	return 0;

}

