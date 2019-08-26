#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={4,5,6,1,5,2};
    int n=6;
    for(int i=1;i<n;i++){
        int no=a[i],j;
        for( j=i-1;j>=0 && a[j]>no;j--){
            a[j+1]=a[j];
        }
        a[j+1]=no;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
