#include<iostream>
using namespace std;

int main(){
	string c="y";
	while(c=="y"){
		system("clear");
		cout<<"1. Install\n2. Update\n3. Run\n4. Colours\n5. Exit\nEnter : ";
		int input1;
		cin>>input1;
	
		switch (input1){
			case 1:
				system("pkg update && pkg upgrade");
				system("pkg install cmatrix");
				system("clear");
				cout<<"Done!! \nEnter 0 : ";
				int test;
				cin>>test;
				break;
			case 2:
				system("pkg update cmatrix");
				system("clear");
				cout<<("Your Cmatrix has been updated\nEnter 0 : ");
				int test1;
				cin>>test1;
				break;
			case 3:
				system("clear");
				cout<<"1. Normal\n2. Asynchronous scroll\n3. Bold characters\n4. No bold characters\n5. Old-style scrolling\n6. Lambda\n7. Speed\nEnter : ";
				int input1_3;
				cin>>input1_3;
				system("clear");
				switch (input1_3){
					case 1 :
						system("cmatrix");
						break;
					case 2 :
						system("cmatrix -a");
						break;
					case 3 :
						system("cmatrix -b");
						break;
					case 4 :
						system("cmatrix -n");
						break;
					case 5 :
						system("cmatrix -o");
						break;
					case 6 :
						system("cmatrix -m");
						break;
					case 7 :
						system("clear");
						cout<<"1. Slow\n2. Normal\n3. Fast\nEnter : ";
						int input1_3_7;
						cin>>input1_3_7;
						system("clear");
						switch (input1_3_7){
							case 1:
								system("cmatrix -u 9");
								break;
							case 2 :
								system ("cmatrix -u 5");
								break;
							case 3 :
								system ("cmatrix -u 1");
								break;
							}
						break;
				}
				break;
			case 4:
				system("clear");
				cout<<"1. Green\n2. Red\n3. Blue\n4. White\n5. Yellow\n6. Cyan\n7. Magenta\n8. Black\n9. Raindow\n Enter : ";
				int input1_4;
				cin>>input1_4;
				system("clear");
				switch (input1_4){
					case 1:
						system("cmatrix -C green");
						break;
					case2 :
						system("cmatrix -C red");
						break;
					case 3 : 
						system("cmatrix -C blue");
						break;
					case 4 :
						system("cmatrix -C white");
						break;
					case 5:
						system("cmatrix -C yellow");
						break;
					case 6:
						system("cmatrix -C cyan");
						break;
					case 7:
						system("cmatrix -C magenta");
						break;
					case 8:
						system("cmatrix -C black");
						break;
					case 9 :
						system("cmatrix -r");
						break;
				}
				break;
			case 5:
				c="n";
				break;
		}
	}
	return 0;
}
