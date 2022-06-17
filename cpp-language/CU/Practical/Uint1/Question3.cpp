// Question : Demonstration of Bitwise Operators

#include<iostream>
using namespace std;

int main(){
    cout<<" -- Program to Demostrate Bitwise Operators -- "<<endl;
    cout<<"\nEnter Two number for Bitwise Operatorsn\n";

    int num1,num2;
    cout<<"Enter First Number  : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;

    cout<<endl;

    cout<<"Bitwise AND Operators : "<<(num1&num2)<<endl;
    cout<<"Bitwise OR Operators : "<<(num1|num2)<<endl;
    cout<<"Bitwise XOR Operators : "<<(num1^num2)<<endl;
    cout<<"Bitwise One's Complement Operator : "<<~num1<<", "<<~num2<<endl;
    cout<<"Bitwise Left Shift Operator : "<<(num1<<2)<<", "<<(num2<<2)<<endl;
    cout<<"Bitwise Right Shift Operator "<<(num1>>2)<<", "<<(num2>>2)<<endl;
    return 0;

}