#include<iostream>
#include<vector>
using namespace std;
int binaryPivot(vector<int>a,int s,int e){
    int mid=(s+e)/2;
    if(a[mid]>a[mid+1]){
        return mid;
    }
    if(a[mid]<a[mid-1]){
        return mid-1;
    }
    if(a[s]<=a[mid]){
        return binaryPivot(a,mid+1,e);
    }
    return binaryPivot(a,s,mid-1);
}
int main(){
    vector<int>v={6,7,8,1,2,3,4,5};
    cout<<binaryPivot(v,0,7);
}
