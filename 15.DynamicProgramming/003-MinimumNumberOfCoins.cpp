// Que Url -> https://www.codingninjas.com/codestudio/problems/minimum-elements_3843091

#include<iostream>
#include<vector>
using namespace std;

// Recursion - TLE
int solveR(vector<int>& coins, int target){
    // Base Case
    if(target == 0)
        return 0;
    if(target < 0)
        return INT_MAX;

    int mini = INT_MAX;

    for(int i=0; i<coins.size(); i++){
        int ans = solveR(coins, target-coins[i]);
        // You are able to build up the target
        if(ans != INT_MAX)
            mini = min(mini, 1 + ans); // +1 to count current coin
    }
    
    return mini; 
}

// Recursion + Memoization - TLE
int solveMem(vector<int>& coins, int target, vector<int>& dp){
    if(target == 0)
        return 0;
    if(target < 0)
        return INT_MAX;

    if(dp[target] != -1)
        return dp[target];

    int mini = INT_MAX;

    for(int i=0; i<coins.size(); i++){
        int ans = solveMem(coins, target-coins[i], dp);
        // You are able to build up the target
        if(ans != INT_MAX)
            mini = min(mini, 1 + ans); // +1 to count current coin
    }
    dp[target] = mini;
    return dp[target]; 
}

// Tabulation
int solveTab(vector<int>& coins, int t){
    vector<int> dp(t+1, INT_MAX);
    dp[0] = 0;

    for(int target=1; target<=t; target++){
        int mini = INT_MAX;
        for(int i=0; i<coins.size(); i++){
            if((target - coins[i] >= 0)){
                int ans = dp[target-coins[i]];
                if(ans != INT_MAX)
                    mini = min(mini, 1 + ans);
            }
        }
        dp[target] = mini;
    }
    return dp[t];
}

// Space Optimization
int solveSO(vector<int>& cost, int n){

    return 0;
}


int main(){
    vector<int> coins = {1, 2, 5};
    int target = 11;
    int ans;

    // Recursion 
    ans = solveR(coins, target) == INT_MAX? -1 : solveR(coins, target);
    cout << "Ans by Recursion : " << ans << endl;

    // Recursion + Memoization
    vector<int> dp(target+1, -1);
    ans = solveMem(coins, target, dp) == INT_MAX ? -1 : solveMem(coins, target, dp);

    cout << "Ans by Recursion + Memoizarion : " << ans << endl;

    // Tabulation
    ans = solveTab(coins,target);
    cout << "Ans by Tabulation : " << ans << endl;
   

    return 0;
}