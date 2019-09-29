#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cstdlib>
#include<string>
#include<set>
#include<cmath>
using namespace std;
bool canPlace(vector<vector<int>>&mat, int i, int j, int n, int number) {
	for (int x = 0; x < n; x++) {
		if (mat[x][j] == number || mat[i][x] == number) {
			return false;
		}
	}
	int rn = sqrt(n);
	int r = (i / rn) * rn;
	int l = (j / rn) * rn;
	for (int x = r; x < r + rn; x++) {
		for (int y = l; y < l + rn; y++) {
			if (mat[x][y] == number) {
				return false;
			}
		}
	}
	return true;	
}
bool sudoku(vector<vector<int>>&mat,int i,int j,int n) {
	// Base Case
	if (i == n) {
		//Print the matrix
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	if (j == n) {
		return sudoku(mat,i+1,0,n);
	}
	if (mat[i][j] != 0) {
		return sudoku(mat, i, j + 1, n);
	}
	// Rec Case
	for (int number = 1; number <= n; number++) {
		if (canPlace(mat, i, j, n, number)) {
			mat[i][j] = number;
			bool couldWeSolve=sudoku(mat,i,j+1,n);
			if (couldWeSolve) {
				return true;
			}
		}
	}
  // BackTracking
	mat[i][j] = 0;
	return false;
}
int main() {	
	int n;
	cin>>n;
	vector<vector<int>>mat(n,vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}
	sudoku(mat, 0, 0, n);
}
