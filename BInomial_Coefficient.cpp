// BASIC COMBINATOIRIES THAT WE USE IN THE BELOW PROGR. 
// USING SPACE TO USE ALREADY COMPUTED RESULT USING (dp)
/*
  #include<iostream>
    using namespace std;
    int resultCoefficient(int n,int k){
    int a[k+1][n+1];
    for(auto i=1,j=1;j<=n;j++){
        a[i][j]=j;
    }
    for(auto i=2;i<=k;i++){
        for(auto j=1;j<=n;j++){
            if(i==j){
                a[i][j]=1;
            }
            else if(j>i){
                a[i][j]=a[i-1][j-1]+a[i][j-1];
            }
            else{
                a[i][j]=0;
            }
        }
    }
    return a[k][n];
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<resultCoefficient(n,k);
}

  
  */
  /*
   USING COMBINATORIES WE HAVE RECURRENCE RELATION = ( N-1 , K-1 )+( N-1 , K )
   
   which is associated with the famous "Pascal's Triangle"
   
   WITHOUT DYNAMIC PROGRAMMING
   
   #include<iostream>
    using namespace std;
    int coefficient(float n,float k){
    if(k==0 || k==n){
        return 1;
    }
      return coefficient(n-1,k-1) + coefficient(n-1,k);
    }
      int main(){
      int n,k;
       cin>>n>>k;
      if(n<k){
        cout<<"Wrong Input:";
     }
     else{
        cout<<coefficient(n,k);
      }
    }
   */
   
   
   /*
   BY USING NORMAL MULTIPLICATION ( N , R )*( N-1 , R-1 )... SO ON USING RECURSION(EASY) 
  
     #include<iostream>
      using namespace std;
      int coefficient(float n,float k){
          if(n==k){return 1;}
          else if(k==1 || k==0){return n;}
             return (n/k)*coefficient(n-1,k-1);
      }
  int main(){
      int n,k;
      cin>>n>>k;
       if(n<k){
          cout<<"Wrong Input:";
      }
       else{
           cout<<coefficient(n,k);
      }
  }
    */
