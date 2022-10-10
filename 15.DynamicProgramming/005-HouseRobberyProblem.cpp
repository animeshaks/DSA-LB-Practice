// URL -> https://www.codingninjas.com/codestudio/problems/house-robber_839733

#include<iostream>
#include<vector>
using namespace std;

// Tabulation
long long int solveTab(vector<int>& nums){
    int n = nums.size();
    long long int curr;
    long long int prev2 = 0;
    long long int prev1 = nums[0];

    for(int i=1; i<n; i++){
        long long int incl = nums[i] + prev2;
        long long int excl = 0 + prev1;
        curr = max(incl, excl);
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

long long int houseRobber(vector<int>& valueInHouse){
    int n = valueInHouse.size();

    if(n==1)
        return valueInHouse[0];
    
    vector<int> first, second;
    for(int i=0; i<n; i++){
        if (i != n-1)
            first.push_back(valueInHouse[i]);
        if (i != 0)
            second.push_back(valueInHouse[i]);
    }
    return max(solveTab(first), solveTab(second));

}

 

int main(){

    return 0;
}