// Question was to find the substring from 2 given string a,b respectively 
// and the addition of the two any substring of those string 
// can be a palindrome or not
// i use idea of: That wht is the smallest palindrome (a)single character 
// but unfortunately is cant be possible cuz s1+s2 have to be done 
// so we check that a1,a2 single character from these strings are same then the given strings are palindrome
#include<iostream>
using namespace std;
int main(){
    int t;
    string a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int flg=0;
        for(auto i=0;i<a.length();i++){
            for(auto j=0;j<b.length();j++){
                if(a[i]==b[j]){
                    flg=1;
                    break;
                }
            }
            if(flg==1){
                break;
            }
        }
        if(flg==1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}
