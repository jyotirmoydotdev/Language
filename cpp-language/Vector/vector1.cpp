// Adding elements in a vector with loop

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vector1;
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    for (int i=0;i<num;i++){
        vector1.push_back(i);
    }
    for (const int& i : vector1){
        cout<<i<<" ";
    }
    return 0;
}