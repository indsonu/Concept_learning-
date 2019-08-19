#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int kadane(vector<int>vect){
    int cs=0,ms=0;
    for(int i=0;i<vect.size();i++){
        cs+=vect[i];
        if(cs<0)cs=0;
        ms=max(ms,cs);
    }
    return ms;
}
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>vect(n,0);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>vect[i];
            sum+=vect[i];
        }
        int sm=kadane(vect);    
        for(int i=0;i<n;i++){
            vect[i]=-vect[i];
        }
        sum=sum-(-kadane(vect));
        cout<<max(sum,sm)<<'\n';
    }
	return 0;
}
