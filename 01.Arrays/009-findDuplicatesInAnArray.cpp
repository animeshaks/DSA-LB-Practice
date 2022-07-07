// Question -> https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1#

#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n){
    vector<int> ans;
    int flag = 1;
    sort(arr, arr + n);

    for (int i = 1; i < n; i++){
        if (arr[i] == arr[i - 1]){
            flag = -1;

            if (ans.size() == 0 || ans[ans.size() - 1] != arr[i]){
                ans.push_back(arr[i]);
            }
        }
        else{
            continue;
        }
    }

    if (flag == 1){
        ans.push_back(-1);
    }

    return ans;
}

int main(){

    return 0;
}