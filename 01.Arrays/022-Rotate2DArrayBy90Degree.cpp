// Question -> https://leetcode.com/problems/rotate-image/

#include<bits/stdc++.h>
using namespace std;

// ALGO IN TWO STEPS
// STEP-1 Transpose the Matrix (Row -> Column, Column -> Row)
// STEP-2 Reverse every row of the matrix
void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();

    // To find Transpose of Matrix
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // To reverse each row
    for (int i = 0; i < n; i++)
        reverse(matrix[i].begin(), matrix[i].end());
}

int main(){

    return 0;
}