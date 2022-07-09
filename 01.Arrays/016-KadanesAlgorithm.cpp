/*
STEP 1 : Add curr element to sum
STEP 2 : Check karo ki naya answer aaya ya nahi
        ans = max(sum, ans)
STEP 3 : Agar sum < 0 then sum = 0
*/

#include<iostream>
using namespace std;

int maxSubArray(int* arr, int n) {
    int ans = INT_MIN;
    int sum = 0;
        
    for(int i=0; i<n; i++){
        sum += arr[i];
        ans = max(sum, ans);
        if(sum < 0)
            sum = 0;
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,-2,5};
    cout << "MAX CONTIGUOUS SUM : " << maxSubArray(arr, 5);
    return 0;
}  