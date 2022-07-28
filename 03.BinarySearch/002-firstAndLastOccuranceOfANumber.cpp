// Question -> https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target){
    int n = nums.size();
    vector<int> ans(2, -1);

    if (n == 0)
        return ans;

    int i = 0, j = n - 1;

    while (i < j){
        int mid = i + (j - i) / 2;
        if (nums[mid] < target)
            i = mid + 1;
        else
            j = mid;
    }

    if (nums[i] != target)
        return ans;
    else
        ans[0] = i;

    j = n - 1;

    while (i < j){
        int mid = (i + j) / 2 + 1;
        if (nums[mid] > target)
            j = mid - 1;
        else
            i = mid;
    }
    ans[1] = j;
    return ans;
}

int main(){

    return 0;
}