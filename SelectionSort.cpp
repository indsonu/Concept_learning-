#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={4,5,6,1,3,2};
    int n=6;
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
        swap(a[i],a[minindex]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
