#include<iostream>
using namespace std;

// TC -> O(n)

bool binarySearch(int *arr, int size, int target){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end){
        int midElement = arr[mid];

        if(midElement == target)
            return true;
        else if(midElement < target)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end-start)/2; 
    }
    return false;
}

int main(){
    int arr[] = {2, 5, 6, 9, 10, 15};
    int size = 6;
    int target = 7;

    if(binarySearch(arr, size, target))
        cout << "Target Found \n" ;
    else    
        cout << "Target Not Found \n";

}