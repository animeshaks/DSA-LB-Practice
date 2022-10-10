/* Custom Pow*/

#include<iostream>
using namespace std;
#define MOD 1000000007;

int pow(int x, int y){
    if(y<=0)
        return 1;
    
    return (x*pow(x, y-1)) % MOD;
}

int main(){    
    cout << pow(5,2);
    return 0;
}