#include<iostream>
#include <cstring>
using namespace std;

int main(){
    string s="joy";
    string t="oyj";

    if (s.length()==t.length()){
            int n=s.length();
        char str[n+1];
        strcpy(str,s.c_str());

        int m=t.length();
        char ttr[m+1];
        strcpy(ttr,t.c_str());

        // str[]
        // ttr[]

        for (int i=0; i<(n+1)-1; i++){
            for(int j=i+1; j<(n+1); j++){
                if(str[j]<str[i]){
                    int temp=str[j];
                    str[j]=str[i];
                    str[i]=temp;
                }
            }
        }
        for (int i=0; i<(m+1)-1; i++){
            for(int j=i+1; j<(m+1); j++){
                if(ttr[j]<ttr[i]){
                    int temp=ttr[j];
                    ttr[j]=ttr[i];
                    ttr[i]=temp;
                }
            }
        }
        bool ans=true;
        for (int i=0;i<n+1;i++){
            if (str[i]!=ttr[i]){
                ans=false;
            }
        }
        if (ans==true){
            cout<<"True"<<endl;
        }
        else{
            cout<<">False"<<endl;
        }
    }
    else
    return 0;
}