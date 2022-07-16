#include<iostream>
using namespace std;

// 2^n
int fastExponantiation(int n){
    if(n==0)
        return 1;
    
    int ans = fastExponantiation(n/2);

    if(n & 1)
        return ans * ans * 2;
    else
        return ans * ans; 
}

int main(){
    cout << fastExponantiation(5);
    return 0;
}