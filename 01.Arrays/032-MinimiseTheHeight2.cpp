#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    // STEP 1
    sort(arr, arr+n);
        
    //STEP 2
    int mini = arr[0];
    int maxi = arr[n-1];
    int ans = maxi-mini;
        
    //STEP 3
    for(int i=0; i<n-1; i++){
        if(arr[i+1] < k)
            continue;
        mini = min(arr[0]+k, arr[i+1]-k);
        maxi = max(arr[n-1]-k, arr[i]+k);
        ans = min(maxi-mini, ans);
    }
    return ans;
}

int main(){

    return 0;
}