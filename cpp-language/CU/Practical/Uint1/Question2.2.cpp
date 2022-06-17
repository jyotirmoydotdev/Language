// Question : Create the equivalent of a four-function calculator. The program should request the user to enter a number, an operator, and another number. 
// (Use floating point) It should then carry out the specified arithmetical operation: adding, subtracting, multiplying, or dividing the two numbers. 
// Use a switch statement to select the operation. Finally, display the result. When it finishes the calculation, the program should ask if the user wants to do another calculation. 
// The response can be ‘y’ or ‘n’.

#include<iostream>
using namespace std;

int main(){
    char c='y';
    while(c=='y'){
        cout<<"Enter a number than operator than another number : ";
        float num1,num2;
        char sign;
        float ans;
        cin>>num1;
        cin>>sign;
        cin>>num2;
        switch (sign)
        {
        case '+':
            ans=num1+num2;
            break;
        case '-':
            ans=num1-num2;
            break;
        case '*':
            ans=num1*num2;
            break;
        case '/':
            ans=num1/num2;
            break;
        default:
            break;
        }
        cout<<num1<<" "<<sign<<" "<<num2<<" = "<<ans<<endl;
        cout<<"Run Again (y/n) : ";
        cin>>c;
    }
    return 0;
}