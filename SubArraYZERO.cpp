// SIMPLY USE HASHING AS IT TOTALLY DEPENDS UPON WHICH HASH FUNCTION YOU ARE USING BUT IDEALLYWE CAN CONSIDERED IT AS O(N)
//1. EITHER SUM COMES OUT TO BE ZERO
//2. EITHER VALUES IN THE PREFIX FUNCTION BECAME SAME {IF 2 INDEXES WHICH HAVING THE PREFIX VALUE SAME ARE 1,5 THEN IT WILL START FROM 2 AND GOES TILL 5}

#include<iostream>
#include<unordered_set>
using namespace std;
bool subarZ(int ar[],int n){
    unordered_set<int>ump;
    int sum=0;
    for(auto i=0;i<n;i++){
        sum+=ar[i];
        if(sum==0|| ump.find(sum)!=ump.end()){return true;}
        ump.insert(sum);
    }
    return false;
}
int main(){
  int ar[5] = {4, 2, 0, 1, 6};
  bool ans = subarZ(ar, 5);
  cout << ans;
}
