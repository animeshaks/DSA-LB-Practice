#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix){

    vector<int> ans;

    int n = matrix.size();
    int m = matrix[0].size();

    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    while (startRow <= endRow && startCol <= endCol){

        if (startRow <= endRow && startCol <= endCol){
            for (int i = startCol; i <= endCol; i++)
                ans.push_back(matrix[startRow][i]);
        }
        startRow++;

        if (startRow <= endRow && startCol <= endCol){
            for (int i = startRow; i <= endRow; i++)
                ans.push_back(matrix[i][endCol]);
        }
        endCol--;

        if (startRow <= endRow && startCol <= endCol){
            for (int i = endCol; i >= startCol; i--)
                ans.push_back(matrix[endRow][i]);
        }
        endRow--;

        if (startRow <= endRow && startCol <= endCol){
            for (int i = endRow; i >= startRow; i--)
                ans.push_back(matrix[i][startCol]);
        }
        startCol++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> ans = spiralOrder(matrix);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    
    return 0;
}