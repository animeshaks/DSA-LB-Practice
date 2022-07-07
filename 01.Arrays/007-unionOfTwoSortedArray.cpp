#include<iostream>
using namespace std;

void findUnion(int* arr1, int n, int* arr2, int m) {
	int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }else if(arr1[i] > arr2[j]){
            cout << arr2[j] << " ";
            j++;
        }else{
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    while(i<n){
        cout << arr1[i] << " ";
        i++;
    }
    while(j<m){
        cout << arr2[j] << " ";
        j++;
    }
}

int main(){
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    findUnion(arr1, 5, arr2, 4);
    return 0;
}