#include<iostream>
#include<string.h>
using namespace std;
void LetsGenerate(string s,int no){
    int i=0;
    while(no>0){
        (no&1)?cout<<s[i]:cout<<"";   // BASIC BIT MASKING IS DONE HERE    LAST BIT IS & WITH ALL THE DIGIT OF THE NUMBER AND COMPARED
        no=no>>1;i++;
    }
}
void GenerateSub(string s){
    int n=s.length();
    int range=(1<<n)-1;
    for(auto i=1;i<=range;i++){
        LetsGenerate(s,i);
        cout<<endl;
    }
}
int main(){
    GenerateSub("abcd");
}
