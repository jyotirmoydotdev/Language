// Question : Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to enter a number of gallons, 
// and then displays the equivalent in cubic feet.

#include<iostream>
using namespace std;

int main(){
    float gallon;
    cout<<"Enter Numbers of Gallons : ";
    cin>>gallon;

    float cubic= 7.481;
    float ans= gallon/cubic;
    cout<<"Converted value in Cubic : "<<ans<<endl;
    return 0;
}