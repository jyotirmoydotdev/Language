// Question : The normal speed of a vehicle is less than 65kmph. If entered speed is less than 65kmph you can print within speed limit otherwise over speed limit.

#include<iostream>
using namespace std;

int main(){
    int Speed;
    cout<<"Enter Speed : ";
    cin>>Speed;
    if (Speed>65){
        cout<<"Over Speeding !!!"<<endl;
    }
    else{
        cout<<"Within the Speed Limit"<<endl;
    }
    return 0;
}