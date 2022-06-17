#include<stdio.h>

int main(){
    int max,i=1,j=2;
    if (i>j){
        max=i;
    }
    else{
        max=j;
    }
    // or

    max = (i>j)? i:j;
    return 0;
    
}

/*
int even(){
    int i=2;
    if (i%2==0)
        char even[]="true";
    else
        char even[]="false";
    
    // Or we can use

    //even =(i%2==0)? "true":"false";
}
*/