#include<iostream>
using namespace std;

void rotateArray(int* arr, int n)
{
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    rotateArray(arr, 6);
    cout << "Rotated Array : ";
    for(int i=0; i<6; i++)
        cout << arr[i] << " "; 
    return 0;
}