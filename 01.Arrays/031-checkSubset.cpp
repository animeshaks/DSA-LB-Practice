// Question -> https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1/

#include<iostream>
#include<unordered_map>
using namespace std;

bool isSubset(int arr1[], int arr2[], int n1, int n2) {
    unordered_map<int, int> freq;
    for(int i=0; i<n1; i++)
        freq[arr1[i]]++;

    for(int i=0; i<n2; i++){
        freq[arr2[i]]--;
        if(freq[arr2[i]] < 0)
            return false;
    }
    return true;
}

int main(){

    int arr1[] = {11, 1, 13, 21, 3, 7};
    int n1 = 6;
    int arr2[] = {11, 3, 7, 1};
    int n2 = 4;

    cout << isSubset(arr1, arr2, n1, n2);

    return 0;
}