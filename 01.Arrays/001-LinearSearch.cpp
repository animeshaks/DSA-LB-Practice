#include<iostream>
using namespace std;

int linearSearch(int* arr, int n, int k) {
	for(int i=0; i<n; i++){
	    if(arr[i] == k)
	        return i+1;
	}
	return -1;
}

int main(){
    int arr[] = {2,4,6,7,9,20};
    cout << "Position : " << linearSearch(arr, 6, 7);
    return 0;
}