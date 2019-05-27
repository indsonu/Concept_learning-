#include<iostream>
using namespace std;
int main(){
    int ct=0,a=5,b=2;
   int c=a^b;              // IT WILL GENERATE THE UNIQUE NUMBER YOU CAN SEE BY DOING MATHEMATICALLY
    while(c!=0){           // THEN WE WLL FIND THE NO. OF SET BITS ARE THE BITS WHICH ARE MINI FOR CONVERSION FROM A TO B
        ct+=(c&1);
        c=c>>1;
    }
    cout<<ct;
}
