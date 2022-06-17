#include<iostream>
using namespace std;

int main(){
    int a,b,ans=0,sum;
    cin>>a>>b;
    sum=a+b;
    if (a==b){
        ans=sum*sum*sum;
        cout<<ans<<endl;
    }
    else{
        cout<<sum<<endl;
    }
    return 0;
}