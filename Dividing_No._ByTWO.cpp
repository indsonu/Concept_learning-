#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,ans="",t="";
    char a;
    cin>>s;
    for(auto i=0;s[i];i++){
        t+=s[i];
        if(stoi(t)>=2){
            ans+=to_string((stoi(t))/2);
            if(stoi(t)%2!=0){
                t="";
                t="1";
            }
            else{
                t="";
            }
        }
        else{
            if(stoi(t)==0 && i!=0){
                ans+="0";
            }
        }
    }
    cout<<ans;
}
