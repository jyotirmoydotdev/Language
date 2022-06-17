#include<iostream>
using namespace std;

int max(int a,int b,int c){
	int max=0;
	if(a>b and a>c){
		max=a;
	}
	else if (b>a and b>c){
		max=b;
	}
	else {
		max=c;
	}
	return max;
}

int min(int a,int b,int c){
        int min=0;
        if(a<b and a<c){
                min=a;
	}
        else if (b<a and b<c){
                min=b;
        }
        else {
                min=c;
        }
        return min;
}

int main(){
	int a,b,c;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	cout<<"Enter 3rd number : ";
	cin>>c;

	cout<<"Min. : "<<min(a,b,c)<<endl;
	cout<<"Max. : "<<max(a,b,c)<<endl;

	return 0;
}
