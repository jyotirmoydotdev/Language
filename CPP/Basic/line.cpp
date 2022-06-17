#include<iostream>
using namespace std;

void line(int n,string c){
	for(int i=0;i<n;i++){
		cout<<c;
	}
	cout<<endl;
	return;
}

int main(){
	cout<<"Enter character : ";
	string c;
	cin>>c;

	cout<<"Enter number : ";
	int n;
	cin>>n;

	line(n,c);
	return 0;
}
