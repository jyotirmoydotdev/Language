#include<iostream>
using namespace std;

int main(){
    int decimal;
    cout<<"Enter the decimal number : ";
    cin>>decimal;
    int binary=0;
    int reminder,product=1;
    while (decimal!=0){
        reminder=decimal%2;
        binary=binary+(reminder*product);
        decimal=decimal/2;
        product=product*10;
    }
    cout<<"Binary Number : "<<binary<<endl;
    return 0;
}