// Question -> https://leetcode.com/problems/unique-number-of-occurrences/

#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr){

    map<int, int> myMap;

    for (int i = 0; i < arr.size(); i++)
        myMap[arr[i]]++;

    int temp = 0;
    vector<int> v;

    for (auto i : myMap)
        v.push_back(i.second);

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size() - 1; i++){
        if (v[i] == v[i + 1])
            return false;
    }
    return true;
}

int main(){

    return 0;
}