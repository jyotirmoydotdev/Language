#include<iostream>
using namespace std;

int max(int a,int b,int c){
	int max=0;
	if (a>b and a>c){
		max=a;
	}
	else if (b>a and b>c){
		max=b;
	}
	else{
		max=c;
	}
	return max;
}

void pyth(int x,int y,int z){
	int a=max(x,y,z);
	int b=0,c=0;
	if (a==x){
		b=y;
		c=z;
	}
	else if (a==y){
		b=x;
		c=z;
	}
	else{
		b=x;
		c=y;
	}
	if (a*a==b*b+c*c){
		cout<<endl;
		cout<<a<<" = "<<b<<" + "<<c<<endl;
		cout<<a*a<<" = "<<b*b<<" + "<<c*c<<endl;
                cout<<a*a<<" = "<<b*b + c*c<<endl;
		cout<<"This is a pythongorian_triplet"<<endl;
	}
	else {
		cout<<endl;
		cout<<a<<" = "<<b<<" + "<<c<<endl;
		cout<<a*a<<" = "<<b*b<<" + "<<c*c<<endl;
		cout<<a*a<<" != "<<b*b + c*c<<endl;
		cout<<"This is not a pythongorian_triplet"<<endl;
        }
	return ;
}

int main(){
	int x,y,z;
	cout<<"a^2=b^2+c^2"<<endl;
	cout<<"Enter 1st num : ";
	cin>>x;
	cout<<"Enter 2nd num : ";
        cin>>y;
	cout<<"Enter 3rd num : ";
        cin>>z;

	pyth(x,y,z);

	return 0;
}
