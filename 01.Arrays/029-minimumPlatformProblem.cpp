// Question -> https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

#include<bits/stdc++.h>
using namespace std;

int maxPlatform(int arr[], int dep[], int n){
    //sort
    sort(arr, arr+n);
    sort(dep, dep+n);

    int i=1, j=0;

    int platform = 1;
    int maxi = INT_MIN;

    while(i<n && j<n){
        if(arr[i] <= dep[j]){
            platform++;
            i++;
        }else{
            platform--;
            j++;
        }
        maxi = max(maxi, platform);
    }
    return maxi;

}

int main(){
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};

    cout << maxPlatform(arr, dep, 6);
    return 0;
}