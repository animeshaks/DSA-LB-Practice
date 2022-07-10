// Question -> https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/

#include <bits/stdc++.h>
using namespace std;

int firstRepeated(int arr[], int n) {
    unordered_map<int,int> map;
        
    for(int i=0; i<n; i++)
        map[arr[i]]++;
        
    for(int i=0; i<n; i++){
        if(map[arr[i]] > 1)
            return i+1;
    }
    return -1;
}

int main(){

    return 0;
}