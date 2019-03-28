// IT LOOKS HARDER BUT TRUST ME AFTER I UNDERSTAND THIS CONCEPT IT BECOMES NORMAL 
// SO NO NEED TO BE WORRY BY JUST SEEING THIS CODE
// 1. CHECK FOR ALL 9S
// 2. SWAP LEFT PART TO RIGHT PART
// 3. START FROM THE MIDDLE INCREMENT WHENEVER THE NUMBER IS GREATER THAN NORMAL ONE 
// AT THAT PLACE IS UR ANSWER

#include<iostream>
#include<string>
using namespace std;
bool All9s(string s,int n){
    for(auto i=0;i<n;i++){
        if(s[i]!='9'){
            return false;
        }
    }
    return true;
}
void nextPalin(string s,int n){
    if(All9s(s,n)){
        cout<<"1";
        for(auto i=1;i<n;i++){cout<<"0";}
        cout<<"1";
        return ;
    }
    bool leftsmaller=false;
    int mid=n/2;
    int i=mid-1,j;
    (n%2==0)?j=mid:j=mid+1;
    while(i>=0 && s[i]==s[j]){
        i--;j++;
    }
    if(i<0 || s[i]-'0'<s[j]-'0'){
        leftsmaller=true;
    }
    while(i>=0){
        s[j]=s[i];
        i--;j++;
    }
    int a[n];
    for(auto i=0;i<n;i++){
        a[i]=s[i]-'0';
    }
    if(leftsmaller){
        int carry=1;
        i=mid-1;
        if(n%2==1){
            a[mid]++;
            if(a[mid]>9){
                carry=1;
                a[mid]=0;
            }
            else{
                carry=0;
            }
            j=mid+1;
        }
        else{
            j=mid;
        }
        while(i>=0){
            a[i]+=carry;
            if(a[i]>9){
                carry=1;
                a[i]=0;
            }
            else{
                carry=0;
            }
            a[j++]=a[i--];
        }
    }
    for(auto i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        nextPalin(s,s.size());
        cout<<"\n";
        }
}
