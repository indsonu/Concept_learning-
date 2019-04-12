#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string result(int t){
    int p;
    string s="";
    while(t!=0){
        p=t&1;      // MAIN CASE                                            1 0 1
        s+=to_string(p);    ///                                             0 0 1
        t=t>>1;              //                                      ANS :  0 0 1
    }
    reverse(begin(s),end(s));
    return s;
}
int main(){
    int t,p;
    string s;
    cin>>t;
    s=result(t);
    cout<<s;
}
