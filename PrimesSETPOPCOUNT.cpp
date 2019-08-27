#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
vector<bool>v(100001,false);
vector<int>dp(100005,0);
void sieve(){
    v[2]=true;
    for(int i=3;i<100001;i+=2)v[i]=true;

    for(int i=3;i*i<=100001;i+=2){
        if(v[i]){
            for(int j=i*i;j<=100001;j+=i){
                v[j]=false;
            }  
        }
    }
}
int main(){
    sieve();
    for(int i=1;i<100005;i++){
        if(v[__builtin_popcount(i)]){
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i]=dp[i-1];
        }
    }
    int t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        cout<<dp[r]-dp[l-1]<<endl;
    }
    
}
