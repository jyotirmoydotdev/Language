// Initialization of Vector and adding value
// Compile using --> g++ -std=c++11 Vector2.cpp
// Output file a.out
// Run ./a.out

#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector without value
    vector<int> vector1;

    // Vector with values
    vector<int> vector2={1, 2, 3, 4, 5};

    // Vector with values but with size and value
    vector<int> vector3(5,12);
    // Vector3 is Equal to
    // ---> vector<int> vector3={12,12,12,12,12};

    return 0;
}