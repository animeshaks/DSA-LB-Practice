#include <bits/stdc++.h>
using namespace std;

vector<int> waveMatrix(vector<vector<int>> &matrix){

    vector<int> ans;

    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0; i<n; i++){

        if(i%2 == 0){
            for(int j=0; j<m; j++)
                ans.push_back(matrix[i][j]);
        }else{
            for(int j=m-1; j>=0; j--)
                ans.push_back(matrix[i][j]);
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans = waveMatrix(matrix);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " "; 
    }
    return 0;
}