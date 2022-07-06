#include<iostream>
using namespace std;

void swapAlternates(int* arr, int n) {
	int i=0,j=n-1;
    while(i <= j){
        swap(arr[i],arr[j]);
        i = i+2;
        j = j-2;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6} ;
    swapAlternates(arr, 6);
    cout << "Result Array : ";
    for(int i=0; i<6; i++)
        cout << arr[i] << " "; 
    return 0;
}