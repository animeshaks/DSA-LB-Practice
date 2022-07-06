#include<iostream>
using namespace std;

void reverseArray(int* arr, int n) {
	int i=0,j=n-1;
    while(i <= j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
}

int main(){
    int arr[] = {2,4,6,7,9,20};
    reverseArray(arr, 6);
    cout << "Reversed Array : ";
    for(int i=0; i<6; i++)
        cout << arr[i] << " "; 
    return 0;
}