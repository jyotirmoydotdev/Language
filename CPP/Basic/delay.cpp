#include<iostream>
using namespace std;

void delay(float sec){
        float msec=1000000*sec;
        clock_t start_time = clock();

        while(clock() < start_time + msec)
                ;
}

int main(){
	cout<<"Enter sec. : ";
	int n;
	cin>>n;
	
	//calling the delay funtion
	//second
	delay(n);

	return 0;
}
