#include<iostream>
#include<time.h>
using namespace std;

void delay(float sec){
	float msec=1000000*sec;
	clock_t start_time = clock();
	
	while(clock() < start_time + msec)
		;
}
void line(int n){
	for(int i=0;i<n;i++)
		cout<<"-";
	cout<<endl;
	return;
}

int main(){
	system("clear");
	cout<<"๐๐๐๐๐ผโ๐"<<endl;
	cout<<">-  -< Welcome to the game....."<<endl;
	cout<<">-  -< Guess the number and win...."<<endl;
	cout<<">-  -< JACKPOT !!!!"<<endl;
	
	cout<<endl;
	line(30);
	cout<<"Enter number between 0-9"<<endl;
	line(30);
	cout<<endl;
	
	//Your numbers
	cout<<"--> Guess 1st Number : ";
	int num1;
	cin>>num1;
	cout<<"--> Guess 2nd Number : ";
	int num2;
	cin>>num2;
	cout<<"--> Guess 3rd Number : ";
	int num3;
	cin>>num3;
	
	//random number
	srand(time(0));
	int ran1=rand()%10,ran2=rand()%10,ran3=rand()%10;

	int res1,res2,res3;
	//result
	if(num1==ran1)
		res1=1;
	else
		res1=-1;

	if(num2==ran2)
                res2=1;
        else
                res2=-1;

	if(num3==ran3)
                res3=1;
        else
                res3=-1;

	//display
	cout<<endl;
	line(30);
	cout<<"++> ๐๐๐๐๐๐ <++"<<endl;
	line(30);
	cout<<endl;
	
	cout<<"--> First Number : "<<num1<<endl;
	delay(2);
	cout<<"--> Output : "<<ran1<<endl;
	if(num1==ran1)
		cout<<"--> (โงโฝโฆ) "<<endl;
	else
		cout<<"--> เฒฅโฟเฒฅ "<<endl;
	
	cout<<endl;
	cout<<"--> Second Number : "<<num2<<endl;
        delay(2);
        cout<<"--> Output : "<<ran2<<endl;
        if(num2==ran2)
                cout<<"--> (โงโฝโฆ) "<<endl;
        else
                cout<<"--> เฒฅโฟเฒฅ "<<endl;
	
	cout<<endl;
	cout<<"--> Third Number : "<<num3<<endl;
        delay(2);
        cout<<"--> Output : "<<ran3<<endl;
        if(num3==ran3)
                cout<<"--> (โงโฝโฆ) "<<endl;
        else
                cout<<"--> เฒฅโฟเฒฅ "<<endl;

	cout<<endl;
	line(30);
	if(res1==res2==res3)
		cout<<"๐๐๐ ๐๐๐ ๐๐๐ ๐๐๐๐๐๐๐ $$$$"<<endl;
	else
		cout<<"๐๐๐๐๐๐ ๐๐๐๐ ๐๐๐๐ ๐๐๐๐ เฒฅโฟเฒฅ "<<endl;
	line(30);
	return 0;
}
