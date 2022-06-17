#include<stdio.h>

int main(){
    int a=12,b=25;
    printf("Output= %d",a&b);
    getchar();
    return 0;
}

/*
// Explanation

12 = 00001100  <- Binary
25 = 00011001  <- Binary

  00001100 
& 00011001
----------
  00001000 = 8 <- Decimal

*/