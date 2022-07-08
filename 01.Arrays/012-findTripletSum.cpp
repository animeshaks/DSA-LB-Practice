// Question -> https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#

#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int A[], int n, int X){
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++){
        int target = X - A[i];

        for (int j = i + 1; j < n; j++){
            if (m[target - A[j]] != 0)
                return true;
        }
        m[A[i]]++;
    }
    return false;
}

int main()
{

    return 0;
}