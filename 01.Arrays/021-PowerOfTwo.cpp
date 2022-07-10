#include<iostream>
using namespace std;

// BIT MANIPULATION
bool isPowerOfTwo(int n){
    if(n<=0)
        return false;
    return (n & n-1) == 0;
}

bool isPowerOfTwo(int n) {
    if(n <= 0)
        return false;
    int count=0;
    while(n != 0){
        if(n&1 == 1)
            count++;
        n = n >> 1;
    }
    if(count == 1)
        return true;
    else
        return false;
    }

int main(){

    return 0;
}