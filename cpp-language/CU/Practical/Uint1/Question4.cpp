// Question : Write additional program to demonstrate if else if ladder.

#include<iostream>
using namespace std;

int main(){
    cout<<" -- Program to Tell Entered Digit is Positive or Negative"<<endl;
    int num;
    cout<<"\nEnter Number : ";
    cin>>num;
    if (num<0){
        cout<<"Entered Number is Negative"<<endl;
    }
    else if(num>0){
        cout<<"Enter Number is Positive"<<endl;
    }
    else{
        cout<<"Entered Number is Zero"<<endl;
    }
    return 0;
}