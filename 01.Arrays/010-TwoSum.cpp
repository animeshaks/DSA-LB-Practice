// Question -> https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){

    //TLE
    // vector<int> ans;
    // sort(nums.begin(), nums.end());
    // int i=0,j=nums.size()-1;
    // while(i<j){
    //     if(nums[i] + nums[j] == target){
    //         ans.push_back(nums[i]);
    //         ans.push_back(nums[j]);
    //     }
    // }
    // return ans;


    //Optimal - O(n)
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++){
        if (m.find(nums[i]) != m.end())
            return {m[nums[i]], i};
        else
            m[target - nums[i]] = i;
    }
    return {};
}

int main(){

    return 0;
}