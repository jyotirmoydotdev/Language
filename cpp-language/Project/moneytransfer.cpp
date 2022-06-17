//Name : Jyotirmoy Barman
//Date : 19-09-2021
//Github : jyotirmoybarman
//Detail : Simple send and recive from friend

#include<iostream>
using namespace std;

int main(){
	int a=0,b=0;
	system("clear"); 
	cout<<"Enter how much money do you have : ";
	cin>>a;

	cout<<"Enter how much money do your friend have : ";
	cin>>b;
	
	string c="y";
	system("clear");
	while (c=="y"){
		cout<<"1. your money\n2. your friend money\n3. send\n4.recive\nEnter number : ";
		int i=0;
		cin>>i;
		switch (i){
			case 1:
				cout<<"Your balance : "<<a<<endl;
				if (a==0)
					cout<<"Your account is empty!! ";
				else if(a<0)
					cout<<"Your are in debit!! ";
				else if(a>0 and a<1000)
					cout<<"You can add more money ";
				else
					cout<<"You can save more, GOOD JOB :-)";
				break;
			case 2:
				cout<<"Your friend balance : "<<b<<endl;
				if(a>b)
					cout<<"Your balance is higher than your friend";
				else if(a<b)
					cout<<"Your balance is low than your friend ";
				else
					cout<<"your both balance are equal";
				break;
			case 3:
				cout<<"Enter how much money you want to send : ";
				int send;
				cin>>send;
				b=send+b;
				a=a-send;
				cout<<"The transaction is done\nNew balance of your "<<a<<"\nYour friend balance : "<<b<<endl;
				break;
			case 4:
				cout<<"Enter how much money do you want to recive : ";
				int recive;
				cin>>recive;
				b=b-recive;
				a=recive+a;
				cout<<"The transaction is done\nNew balance of your : "<<a<<"\nYour friend balance : "<<b<<endl;
				break;
			default:
				cout<<"Invalid number !!" ;
				break;
		}
		cout<<"\nRun Again (y/n) :";
		cin>>c;
		system("clear");
	}
	return 0;
}
