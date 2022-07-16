#include<iostream>
using namespace std;

int getSum(int* arr, int size){
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];
    
    int remainingPartSum = getSum(arr+1, size-1);
    int sum = arr[0] + remainingPartSum;

    return sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    cout << "SUM : " << getSum(arr, 6);

    return 0;
}