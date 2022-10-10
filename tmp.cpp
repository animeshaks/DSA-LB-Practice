int solve(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(nums.size()+2, 0);
    
    for(int i=n-1; i>=0; i--){
        int incl = arr[i] + dp[i+2];
        int incl = 0 + dp[i+1];
        dp[i] = max(incl, excl);
    }
    return dp[0];
}