#include<iostream>
#include<vector>
using namespace std;
bool safe(vector<vector<int>>&board,int k,int l,int n){
    if(board[k][l]==1){
        for(auto i=0;i<n;i++){
            for(auto j=0;j<n;j++){
                if(i==k || j==l){
                    board[i][j]--;    
                }
            }    
         }
        for(auto i=k+1,j=l+1;i<n && j<n;i++,j++){
            board[i][j]--;
        }
        for (auto i=k-1,j=l-1; i >= 0 && j >=0; i--, j--) {
          board[i][j]--;
        }
        for(auto i=k-1,j=l+1;i>-1 && j<n;i--,j++){
                board[i][j]--;
        }
        for(auto i=k+1,j=l-1;j>-1 && i<n;i++,j--){
            board[i][j]--;
        }
        return true;
    }
   return false;
}
void revert(vector<vector<int>>&board,int k,int l,int n){
        for(auto i=0;i<n;i++){
            for(auto j=0;j<n;j++){
                if(i==k || j==l){
                    board[i][j]++;    
                }
            }    
         }
        for(auto i=k+1,j=l+1;i<n && j<n;i++,j++){
            board[i][j]++;
        }
        for (auto i=k-1,j=l-1; i >= 0 && j >=0; i--, j--) {
          board[i][j]++;
        }
        for(auto i=k-1,j=l+1;i>-1 && j<n;i--,j++){
                board[i][j]++;
        }
        for(auto i=k+1,j=l-1;j>-1 && i<n;i++,j--){
            board[i][j]++;
        }
}
bool checkQueenProblem(vector<vector<int>>&vect,int n,int col,vector<vector<int>>&board){
    if(col>=n){
        return true;
    }
    for(auto i=0;i<n;i++){
        if(safe(board,i,col,n)){
            vect[i][col]=1;
            if(checkQueenProblem(vect,n,col+1,board)){
                return true;
            }
            vect[i][col]=0;
            revert(board,i,col,n);
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>vect(n,vector<int>(n,0));
    vector<vector<int>>board(n,vector<int>(n,1));
    if(checkQueenProblem(vect,n,0,board)){
        cout<<"YES\n";
        for(auto i=0;i<n;i++){
            for(auto j=0;j<n;j++){
                cout<<vect[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO\n";
    }
}
