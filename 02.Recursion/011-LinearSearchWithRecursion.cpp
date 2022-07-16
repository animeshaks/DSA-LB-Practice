#include<iostream>
using namespace std;

bool linearSearch(int* arr, int size, int k){
    if(size == 0)
        return false;
    if(arr[0] == k)
        return true;
    
    return linearSearch(arr+1, size-1, k);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    cout << "Found OR Not : " << linearSearch(arr, 6, 4);

    return 0;
}