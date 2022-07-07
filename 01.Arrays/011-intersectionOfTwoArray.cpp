#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2){
    unordered_map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++){
        mp[nums1[i]]++;
    }

    for (int i = 0; i < nums2.size(); i++){
        if (mp[nums2[i]] != 0){
            ans.push_back(nums2[i]);
            mp[nums2[i]] = 0;
        }
    }

    return ans;
}

int main(){

    return 0;
}