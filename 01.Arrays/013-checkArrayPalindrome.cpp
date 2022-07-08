#include<iostream>
using namespace std;

bool isPalindrome(int* arr, int n) {
	int i=0,j=n-1;
    while(i<=j){
        if(arr[i] != arr[j])
            return false;
        i++;j--;
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,3,2,1};
    cout << "Is Palindrome : " << isPalindrome(arr, 6);
    return 0;
}