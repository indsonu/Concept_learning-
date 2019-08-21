

#include<iostream>
#include<algorithm>
using namespace std;
int c[10000];
int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int carry=0,i,j,k=0;
    for(i=n-1,j=m-1;min(i,j)>=0;i--,j--){
        int pro=a[i]+b[j];
        pro+=carry;
        c[k++]=pro%10;
        carry=pro/10;
    }
    if(i>j){
         while(i>=0 && carry){
             int pro=a[i]+carry;
             c[k++]=pro%10;
             carry=pro/10;
             i--;
         }
         if(carry){
             c[k++]=carry;
         }
         if(carry==0 && i>=0){
            while(i>=0){
                c[k++]=a[i--];
            }
        }
    }
    else if(j>i){
        while(j>=0 && carry){
             int pro=b[j]+carry;
             c[k++]=pro%10;
             carry=pro/10;
             j--;
         }
         if(carry){
             c[k++]=carry;
         }
         if(carry==0 && j>=0){
            while(j>=0){
                c[k++]=b[j--];
            }
        }
    }
    else{
        if(carry){
            c[k++]=carry;
        }
    }
    for(int i=k-1;i>=0;i--){
        cout<<c[i]<<", ";
    }
    cout<<"END";
}

