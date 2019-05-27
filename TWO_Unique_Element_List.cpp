//   FINDING THE TWO UNIQUE NO. FROM THE GIVEN ARRAY
#include<iostream>
#include<algorithm>
using namespace std;
void GenerateUnique(int *a,int temp){                 // FIRST MAKE THE XOR OF THOSE ELEMENTS OF THE LIST   
    int i=0,firstno=0,secondno=0,res;                 // THEN WE LL GET C=A^B;
    res=temp;                                         // THEN CREATE 2 SUBARRAY IN WHICH ONE ARRAY CONTAIN FIRST SET BIT IN ALL THE ELEM..
    while(temp>0){                                    // OTHERS DOES NOT CONTAIN
        if(temp&1){break;}                            // AFTER THAT CREATE A MASK
        i++;
        temp=temp>>1;
    }
    int mask=(1<<i); // CREATING A MASK FROM THE POSITION 
    for(auto i=0;i<6;i++){
        if((mask&a[i])!=0){   // THOSE CONTAIN SET BITS AT THAT POSITION WE TAKE XOR OF THOSE ONLY SO WE WLL GET ONE OF THE UNIQUE ELEMENT.
            firstno=firstno^a[i];
        }
    }                              
    cout<<min((firstno^res),firstno)<<" "<<max((firstno^res),firstno)<<endl;// NEXT ONE CAN BE FIND OUT USING XOR WITH C
}
int main(){
    int a[6]={5,24,3,3,5,21},temp=0;
    for(auto i=0;i<6;i++){
        temp=temp^a[i];
    }
    GenerateUnique(a,temp);
}
