#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],ct[64]={0};                       //   NUMBER IS STORED IN 64 BIT INTEGER
    for(auto i=0;i<n;i++){
        cin>>a[i];
    }
    for(auto i=0;i<n;i++){
        int no=a[i];
        int j=0;
        while(no>0){
            ct[j++]+=(no&1);                //  CONVERTING INTO BINARY THEN ADDING TO THE 64 BIT ARRAY
            no=no>>1;//  DIVIDING NO BY 2 SO IT SHIFT THE RIGHT MOST BIT
        }
    }
    for(auto i=0;i<64;i++){
        ct[i]=ct[i]%3;             // THOSE WHO CAME 3 TIMES WILL ERADICATE BY MODULO WITH 3
    }
    int ans=0,p=1;
    for(auto i=0;i<64;i++){
        ans+=ct[i]*p;               // SIMPLE CONVERSION OF INTEGER ARRAY(BINARY) INTO  NUMBER
        p=p<<1;
    }
    cout<<ans;
}
