// Question -> https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1/#

#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(int arr[], int n) { 
    unordered_map<int,int> map;
        
    for(int i=0; i<n; i++)
        map[arr[i]]++;
            
    for(int i=0; i<n; i++){
        if(map[arr[i]] == 1)
            return arr[i];
    }
    return 0;
}
 
int main(){

    return 0;
}