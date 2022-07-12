// Question -> https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1/

/*
    APPROACH 1 : Bruteforce (Using 2 loops)

    APPROACH 2 : Prefix Sum method
        -> Find sum from first element to current element and store in an same size of array
        -> If Sum array contains 0 then pakka there is sub array with zero sum
        -> If in Sum array any element is repeating then subArray sum is between those two(repeating element)
        {if sum[p] and sum[q] is same then subarray will range in (p+1, q)}

*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Solution that I submitted on GFG
bool subArrayExists(int arr[], int n){
    unordered_map<int, int> mp;
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0 || mp[sum] || arr[i] == 0)
            return true;
        mp[sum]++;
    }
    return false;
    }


// This solution gives Segmentation fault in GFG
int main(){
    int arr[] = {4, 2, -3, 1, 6};
    int n = 5;

    vector<int> prefixSum;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
        prefixSum[i] = sum;
    }

    unordered_map<int, bool> m;

    for(int i=0; i<n; i++){
        if(prefixSum[i] == 0){
            cout << "Zero sum subarray present";
            break;
        }
        else if(m[prefixSum[i]] == true){
            cout << "Zero sum subarray present";
            break;
        }
        else{
            m[prefixSum[i]] = true;
        }
    }
}