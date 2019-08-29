#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binarysearch(int s,int e,int ek,vector<int>a,int n){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(a[mid]==ek){
        return mid;
    }
    else if(a[s]<=a[mid]){
        if(a[s]<=ek && ek<=a[mid]){
            auto itr=lower_bound(a.begin()+s,a.begin()+mid,ek);
            return itr-a.begin();
        }
        else{
            return binarysearch(mid+1, e, ek, a,n);
        }
    }
    else if(a[mid]<=ek && ek<=a[e]){
        return binarysearch(mid+1,e, ek,a, n);
    }
    return binarysearch(s,mid-1, ek,a,n);
}
int main(){
    vector<int> a={4,5,1,2,3};
    cout<<"Element Found "<<binarysearch(0,5-1,1,a,5);
}
