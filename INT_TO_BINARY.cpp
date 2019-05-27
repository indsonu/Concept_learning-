#include<iostream>
#include<algorithm>
using namespace std;
void ConvertIntoBinary(int n){
    n=abs(n);
    string s="";
    while(n>0){
        int i=(n&1);              // STORING THE LAST BIT INTO A STRING 
        s+=to_string(i);
        n=n>>1;
    }
    reverse(s.begin(),s.end());  // ANS WILL COME FROM LAST SO WE REVERSE IT
    cout<<s;
}
int main(){                           
    ConvertIntoBinary(6);                                           
}
/*
                    1 1 0
                  & 0 0 1
                    -----
                   0 0 (0) THIS BIT IS COUNTED: SO THATS WHY WE REVERSE IT 
*/
