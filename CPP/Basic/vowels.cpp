#include<iostream>
using namespace std;

int main(){
	string v[]={"a","e","i","o","u","A","E","I","O","U"};
	string a;
	cout<<"Enter : ";
	cin>>a;
	int i;
	for (i=0;i<=10;i++){
		if(a==v[i]){
			cout<<"This is a vowel"<<endl;
			break;
		}
		else if(i==10 and a!=v[9]){
		cout<<"This is a consonant"<<endl;}
	}
	return 0;
}
