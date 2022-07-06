#include<iostream>
using namespace std;

void moveNegativeToLeft(int* arr, int n) {
	int j = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]<0) {
            if (i!=j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    moveNegativeToLeft(arr, 6);
    cout << "Result Array : ";
    for(int i=0; i<6; i++)
        cout << arr[i] << " "; 
    return 0;
}