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
	cout<<"𝕃𝕆𝕋𝕋𝔼ℝ𝕐"<<endl;
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
	cout<<"++> 𝙍𝙀𝙎𝙐𝙇𝙏 <++"<<endl;
	line(30);
	cout<<endl;
	
	cout<<"--> First Number : "<<num1<<endl;
	delay(2);
	cout<<"--> Output : "<<ran1<<endl;
	if(num1==ran1)
		cout<<"--> (≧▽≦) "<<endl;
	else
		cout<<"--> ಥ‿ಥ "<<endl;
	
	cout<<endl;
	cout<<"--> Second Number : "<<num2<<endl;
        delay(2);
        cout<<"--> Output : "<<ran2<<endl;
        if(num2==ran2)
                cout<<"--> (≧▽≦) "<<endl;
        else
                cout<<"--> ಥ‿ಥ "<<endl;
	
	cout<<endl;
	cout<<"--> Third Number : "<<num3<<endl;
        delay(2);
        cout<<"--> Output : "<<ran3<<endl;
        if(num3==ran3)
                cout<<"--> (≧▽≦) "<<endl;
        else
                cout<<"--> ಥ‿ಥ "<<endl;

	cout<<endl;
	line(30);
	if(res1==res2==res3)
		cout<<"𝐘𝐎𝐔 𝐖𝐈𝐍 𝐓𝐇𝐄 𝐉𝐀𝐂𝐊𝐏𝐎𝐓 $$$$"<<endl;
	else
		cout<<"𝐁𝐄𝐓𝐓𝐄𝐑 𝐋𝐔𝐂𝐊 𝐍𝐄𝐗𝐓 𝐓𝐈𝐌𝐄 ಥ‿ಥ "<<endl;
	line(30);
	return 0;
}
