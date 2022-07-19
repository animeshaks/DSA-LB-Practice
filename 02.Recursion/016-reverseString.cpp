// Question -> https://leetcode.com/problems/reverse-string/

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<char> &s, int start, int end){
    if (start > end)
        return;
    swap(s[start], s[end]);
    reverse(s, start + 1, end - 1);
}

int main(){

    return 0;
}