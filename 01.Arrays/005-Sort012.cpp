#include<iostream>
using namespace std;

void sort012(int* a, int n)
{
    int low=0,i=0,high=n-1;
    while(i<=high){
        if(a[i]==0){
            a[i] = a[low];
            a[low] = 0;
            low++;
            i++;
        }
        else if(a[i]==2){
            a[i] = a[high];
            a[high] = 2;
            high--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int arr[] = {1,2,0,0,2,1};
    sort012(arr, 6);
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
    return 0;
}