#include<iostream>
using namespace std;

void findMinMax(int* arr, int n) {
    int min = INT_MAX, max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] < min)
            min = arr[i];
        
        if(arr[i] > max)
            max = arr[i];
    }

    cout << "MIN : " << min;
    cout << "\nMAX : " << max;
}

int main(){
    int arr[] = {2,4,6,7,9,20};
    findMinMax(arr, 6);
    return 0;
}