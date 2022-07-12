// Question -> https://practice.geeksforgeeks.org/problems/common-elements1132/1/

#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> arr1, vector<int> arr2){
    vector<int> ans;
    int i=0,j=0;

    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr1[i]>arr2[j]){
            j++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){

    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> temp = intersection(arr1, arr2);

    vector<int> output = intersection(temp, arr3);

    vector<int> finalAns;

    // To remove duplicate elements
    for(int i=0; i<output.size(); i++){
        if(output[i] == output[i+1])
            continue;
        finalAns.push_back(output[i]);
    }

    for(int i=0; i<finalAns.size(); i++)
        cout << finalAns[i] << " ";

    return 0;
}
