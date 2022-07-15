#include<iostream>
using namespace std;

void countTillN(int start, int n){
    if(start > n)
        return;
    
    cout << start << " ";
    countTillN(start + 1, n);
}

int main(){
    int n = 5;
    countTillN(1, n);
    return 0;
}