// DP is the way to solve this problem 
// i did this just by learning the recursion 
// and knap of Dynamic Programming

#include<bits/stdc++.h>
using namespace std;
unordered_map<long long, long long> memo;
unsigned long long int result(unsigned long long int n){
    if(memo[n]!=0){
        return memo[n];
    }
    if(n==0 || n==1){
        return n;
    }
    memo[n]=max(n,result(n/2)+result(n/3)+result(n/4));
    return memo[n];
}
int main(){
    unsigned long long int n;
    while(cin>>n){
     memo[0]=0;
      memo[1] = 1;
      cout << result(n) << "\n";
    }
}
