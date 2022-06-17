// Question : You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5 and adding 32. 
// Write a program that allows the user to enter a floating-point number representing degrees Celsius, and then displays the corresponding degrees Fahrenheit.

#include<iostream>
using namespace std;

int main(){
    float Celsius;
    cout<<"Enter Celsius : ";
    cin>>Celsius;
    cout<<"Fahrenheit : "<<((Celsius*9.0)/5.0)+32<<endl;
    return 0;
}