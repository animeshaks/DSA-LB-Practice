// Question -> https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/#

#include<iostream>
#include<unordered_map>
using namespace std;

int majorityElement(int arr[], int size){
    unordered_map<int, int> freq;
    for(int i=0; i<size; i++)
        freq[arr[i]]++;
            
    for(int i=0; i<size; i++){
        int val = freq[arr[i]];
        if(val > size/2)
            return arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {3,1,3,3,2};
    cout << majorityElement(arr, 5);

    return 0;
}