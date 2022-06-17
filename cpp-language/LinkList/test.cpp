#include<iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    for (int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=0;
    for (int i=3;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    /*
    for (int i=3;i>=0;i--){
       int temp=arr[i];
       ans=temp*10+arr[i-1];
    }
    cout<<endl;
    */
    for (int i=0;i<3;i++){
        //int temp=arr[i];
        ans=arr[i]*10+arr[i+1];
        cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}