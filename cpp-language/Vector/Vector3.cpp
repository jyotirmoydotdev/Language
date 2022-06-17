// Adding, Accesing, Deleting and Replacing in vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Adding
    vector<int> vector1= {1,2,3,4};
    vector1.push_back(5); // Adding 5 at last in vector1

    // Accessing elements
    cout<<"Element at index 3 : "<<vector1.at(3);

    return 0;
}