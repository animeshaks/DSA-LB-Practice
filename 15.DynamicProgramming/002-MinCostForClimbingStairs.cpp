// Que Url -> https://leetcode.com/problems/min-cost-climbing-stairs/

#include<iostream>
#include<vector>
using namespace std;

// Recursion - TLE
int solveR(vector<int>& cost, int n){
    // Base Case
    if(n == 0)
        return cost[0];
    if(n == 1)
        return cost[1];
    
    int ans = cost[n] + min(solveR(cost, n-1), solveR(cost, n-2));
    return ans;
}

// Recursion + Memoization - TLE
int solveMem(vector<int>& cost, int n, vector<int>& dp){
    // Base Case
    if(n == 0)
        return cost[0];
    if(n == 1)
        return cost[1];

    if(dp[n] != -1)
        return dp[n];
    
    dp[n] = cost[n] + min(solveR(cost, n-1), solveR(cost, n-2));
    return dp[n];
}

// Tabulation
int solveTab(vector<int>& cost, int n){
    vector<int> dp(n+1);

    dp[0] = cost[0];
    dp[1] = cost[1];

    for(int i=2; i<n; i++)
        dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
    
    return min(dp[n-1],dp[n-2]);
}

// Space Optimization
int solveSO(vector<int>& cost, int n){
    int curr;
    int prev1 = cost[1];
    int prev2 = cost[0];

    for(int i=2; i<n; i++){
        curr = cost[i] + min(prev1,prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    
    return min(prev1,prev2);
}


int main(){
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    int n = cost.size();
    int ans;

    // Recursion 
    ans = min(solveR(cost, n-1), solveR(cost, n-2));
    cout << "Ans by Recursion : " << ans << endl;

    // Recursion + Memoization
    vector<int> dp(n+1, -1);
    ans = min(solveMem(cost, n-1, dp), solveMem(cost, n-2, dp));
    cout << "Ans by Recursion + Memoizarion : " << ans << endl;

    // Tabulation
    ans = solveTab(cost,n);
    cout << "Ans by Space Optimization : " << ans << endl;

    // Space Optimization
    ans = solveSO(cost,n);
    cout << "Ans by Tabulation : " << ans << endl;

    return 0;
}