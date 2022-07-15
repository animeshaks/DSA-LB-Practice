#include<iostream>
using namespace std;

void printDigits(int n){
    if(n == 0)
        return;
    
    int rem = n % 10;
    n = n/10;
    printDigits(n);
    cout << rem << " ";
}

int main(){
    int n = 54321;
    printDigits(n);
    return 0;
}