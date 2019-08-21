#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int c[n],i=0,j=0,k=0;
    while(i<n && j<n){
        if(a[i]<=b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
    cout<<c[k/2-1];
	return 0;
}
