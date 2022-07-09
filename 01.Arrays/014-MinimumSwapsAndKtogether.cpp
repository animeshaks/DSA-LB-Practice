// Question -> https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1

#include<iostream>
using namespace std;

int minSwap(int arr[], int n, int k)
{
    int count = 0;
    // Find window size -> count of number <= k
    for (int i = 0; i < n; i++){
        if (arr[i] <= k)
            count++;
    }

    // Create first window
    int bad = 0;
    for (int i = 0; i < count; i++){
        if (arr[i] > k)
            bad++;
    }

    int ans = bad;
    
    // Check for remaining windows
    for (int i = 0, j = count; j < n; i++, j++){
        if (arr[i] > k)
            bad--;
        if (arr[j] > k)
            bad++;
        ans = min(ans, bad);
    }
    return ans;
}

int main(){
    int arr[] = {2, 7, 9, 5, 8, 7, 4};
    int K = 6;
    cout << "Minimum Swaps : " << minSwap(arr, 7, K);
    return 0;
}