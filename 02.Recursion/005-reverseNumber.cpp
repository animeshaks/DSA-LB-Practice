#include<iostream>
using namespace std;

int ans = 0;

int reverse(int n){
    if(n == 0)
        return ans;
    
    if(n > 0){
        int rem = n % 10;
        ans = ans*10 + rem;
        reverse(n/10);
    }
    return ans;    
}

int main(){
    int n = 54321;
    cout << reverse(n);
    return 0;
}