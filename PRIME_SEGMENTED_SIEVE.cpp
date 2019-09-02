#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
bool isPrime[MAX];
vector<long long >S(MAX);
void sieve(){
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0]=isPrime[1]=false;
    for(long long i=2;i*i<=MAX;i++){
        if(isPrime[i]){
            for(long long  j=i*i;j<MAX;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int j=0;
    for(long long i=0;i<MAX;i++){
        if(isPrime[i]){
            S[j++]=i;
        }
    }
}
void printPrimes(long long l,long long r){
    bool isSeg[r-l+1];
    for(int i=0;i<r-l+1;i++){
        isSeg[i]=true;
    }
    for(int i=0;S[i]*S[i]<=r;i++){
        long long cur=S[i];
        long long base=(l/cur)*cur;
        if(base<l){
            base+=cur;
        }
        for(int j=base;j<=r;j+=cur){
            isSeg[j-l]=false;
        }
        if(base==cur){
            isSeg[base-l]=true;
        }
    }
    for(int i=0;i<=r-l;i++){
        if(isSeg[i] && i+l!=1){
            cout<<i+l<<endl;
        }
    }
    cout<<endl;
}
int main() {
    sieve();
    long long t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        printPrimes(l,r);
    }
}
