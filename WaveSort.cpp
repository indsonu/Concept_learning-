// SERIES IN WHICH AN ELEMENT IS INCREASING AND DECREASING SIMULTANEOUSLY
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
        int a[]={1,3,4,2,7,8};
        int n=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<n;i+=2){
            // Left element check
            if(i>0 && a[i-1]>a[i]){
                swap(a[i],a[i-1]);
            }
            // right element 
            if(i<n-1 && a[i+1]>a[i]){
                swap(a[i],a[i+1]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
}
