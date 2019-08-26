#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int ans=1;
        if(n%2==0){
            ans*=2;
            while(n%2==0)n/=2;
        }
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                ans*=i;
                while(n%i==0)n/=i;
            }
        }
        if(n>2){
            ans*=n;
        }
        cout<<ans<<'\n';
    }
}
