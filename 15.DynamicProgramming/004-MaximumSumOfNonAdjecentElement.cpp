// URL -> https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261

#include<iostream>
#include<vector>
using namespace std;

// Recursion
int solveRec(vector<int>& nums, int n){
    // Base Case
    if(n < 0)
        return 0;
    if(n == 0)
        return nums[0];
    
    int incl = nums[n] + solveRec(nums, n-2);
    int excl = 0 + solveRec(nums, n-1);

    return max(incl, excl);
}

// Recursion + Memoization
int solveMem(vector<int>& nums, int n, vector<int>& dp){
    // Base Case
    if(n < 0)
        return 0;
    if(n == 0)
        return nums[0];

    if(dp[n] != -1)
        return dp[n];
    
    int incl = nums[n] + solveMem(nums, n-2, dp);
    int excl = 0 + solveMem(nums, n-1, dp);

    dp[n] = max(incl, excl);
    return dp[n];
}

// Tabulation
int solveTab(vector<int>& nums, int n){
    vector<int> dp(n+1, 0);

    dp[0] = nums[0];

    for(int i=1; i<=n; i++){
        int incl;
        if(i-2 < 0)
            incl = nums[i] + 0;
        else
            incl = nums[i] + dp[i-2]; // Doubbt
        int excl = 0 + dp[i-1];
        dp[i] = max(incl, excl);
    }
    return dp[n];
}

// Second logic for Tabulation
// int solve(vector<int> &nums){
//     int n = nums.size();
//     vector<int> dp(nums.size()+2, 0);
    
//     for(int i=n-1; i>=0; i--){
//         int incl = nums[i] + dp[i+2];
//         int excl = 0 + dp[i+1];
//         dp[i] = max(incl, excl);
//     }
//     return dp[0];
// }

// Space Optimization
int solveSO(vector<int>& nums, int n){
    int curr;
    int prev2 = 0;
    int prev1 = nums[0];

    for(int i=1; i<=n; i++){
        int incl = nums[i] + prev2;
        int excl = 0 + prev1;
        curr = max(incl, excl);
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

int main(){
    vector<int> nums = {1, 2, 4};
    int n = nums.size();
    int ans;

    // Recursion
    ans = solveRec(nums, n-1);
    cout << "Recursion : " << ans << endl;

    // Recursion + Memoization
    vector<int> dp(n, -1);
    ans = solveMem(nums, n-1, dp);
    cout << "Recursion + Memoization : " << ans << endl;

    // Tabulation
    ans = solveTab(nums, n-1);
    cout << "Tabulation : " << ans << endl;

    // Space Optimization
    ans = solveSO(nums, n-1);
    cout << "Space Optimization : " << ans << endl;

    return 0;
}