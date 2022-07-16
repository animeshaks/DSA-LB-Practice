#include<iostream>
using namespace std;

bool binarySearch(int* arr, int start, int end, int k){

    // CASE 1 : ELEMENT NOT FOUND
    if(start > end)
        return false;
    
    int mid = start + (end-start)/2;

    // CASE 2 : ELEMENT FOUND
    if(arr[mid] == k)
        return true;

    // RECURSIVE CALL
    if(arr[mid] > k)
        return binarySearch(arr, start, mid-1, k);
    else    
        return binarySearch(arr, start+1, end, k);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    cout << "Found OR Not : " << binarySearch(arr, 0, 6, 9);
    return 0;
}