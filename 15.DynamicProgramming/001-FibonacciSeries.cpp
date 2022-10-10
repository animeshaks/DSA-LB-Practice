#include<iostream>
#include<vector>
using namespace std;

// Recursion
int solveR(int n){
    if(n <= 1)
        return n;
    
    return solveR(n-1) + solveR(n-2);
}

// Recursion + Memoization (Top Down)
int solveMem(int n, vector<int>& dp){
    if(n <= 1)
        return n;

    // STEP 3 : Return if already present
    if(dp[n] != -1)
        return dp[n];

    // STEP 2 : Store in DP array
    dp[n] = solveMem(n-1, dp) + solveMem(n-2, dp);
    return dp[n];
}

// Tabulation (Bottom Up)
int solveTab(int n){

    // STEP 1 : Create DP array
    vector<int> dp(n+1);

    // STEP 2 : Base case analysis : Update dp array accordingly
    dp[0] = 0;
    dp[1] = 1;

    // STEP 3 : Loop
    for(int i=2; i<=n; i++)
        dp[i] = dp[i-1] + dp[i-2];
    
    return dp[n];
}

// Space Optimization
int solveSO(int n){
    int curr;
    int prev1 = 1;
    int prev2 = 0;

    for(int i=2; i<=n; i++){
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

int main(){
    int n = 6;

    // Recursion
    cout << n << "th Fibonacci Number is : " << solveR(n) << endl;

    // Memoization
    // STEP 1 : Create DP array
    vector<int> dp(n+1, -1);
    cout << n << "th Fibonacci Number is : " << solveMem(n, dp) << endl;

    // Tabulation
    cout << n << "th Fibonacci Number is : " << solveTab(n) << endl;

    // Space Optimization
    cout << n << "th Fibonacci Number is : " << solveSO(n) << endl;

    return 0;
}