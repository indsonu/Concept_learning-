// NUMBER OF SUBSET OR SUBSEQUENCE
#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(auto i=0;i<n;i++){
            cin>>a[i];
        }
        string S[1<<n];
        for(auto i=0;i<(1<<n);i++){
         int p=i;
                string s;
            do{
                s+=to_string(i&1);
                 i=i>>1;  
            }while(i>0);
               i=p;
            S[i]=s;
        }
        for(auto i=0;i<(1<<n);i++){
            cout<<S[i]<<endl;
        }
    }
}
