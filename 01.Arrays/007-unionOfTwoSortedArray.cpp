#include<bits/stdc++.h>
using namespace std;

// Test cases Partially passed - ARRAY
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

// Test Cases fully passed - ARRAY
int doUnion(int arr1[], int n, int arr2[], int m)  {
    int i=0,j=0;
    vector<int> ans;
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    if (arr1[i] == arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
    }else if (arr1[i]<arr2[j]){
        ans.push_back(arr1[i]);
        i++;
    }else if (arr1[i] > arr2[j] ){
        ans.push_back(arr2[j]);
        j++;
    }
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            if(ans.back()!=arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }else if(arr1[i] > arr2[j]){
            if(ans.back()!=arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }else if (arr1[i]==arr2[j]){
            if(ans.back()!=arr1[i])
                ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        if(ans.back()!=arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        if(ans.back()!=arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }
    return ans.size();
}

// Short and Sweet Solution -> SET
int doUnion2(int arr1[], int n, int arr2[], int m)  {
    set<int>s;
    int i=0, j=0;
    while(i<n)
        s.insert(arr1[i++]);
    while(j<m)
        s.insert(arr2[j++]);
    return s.size();
}

int main(){
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    findUnion(arr1, 5, arr2, 4);
    return 0;
}