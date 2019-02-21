#include <iostream>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
bool isPrime(int n){
    for(auto i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
IOS int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        if(a<4){
            cout<<"-1\n";
        }
        else if(a%2==0){
            cout<<"1\n";
        }
        else{
            if(isPrime(a-2)){
                cout<<"1\n";
            }
            else{
                cout<<"2\n";
            }
        }
    }
}
