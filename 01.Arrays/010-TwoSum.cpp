// Question -> https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

// If asked to return indexes
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) != m.end())
            return {m[nums[i]], i};
        else
            m[target - nums[i]] = i;
    }
    return {};
}

// If asked to return values
vector<int> twoSumII(vector<int> &nums, int target){
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;
    while (i < j){
        if (nums[i] + nums[j] < target){
            i++;
        }
        else if (nums[i] + nums[j] > target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return {};
}

int main()
{

    return 0;
}