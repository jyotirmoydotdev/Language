#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter element : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int n = 4;
    int arr[4]={-1,4,7,2};
    cout<<"Printing sub array ..."<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }
    return 0;
}