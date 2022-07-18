#include<iostream>
using namespace std;

int solve(int coins[], int n, int amount, int currentCoin) {
    //base case
    if(amount == 0 )
        return 1;

    if( amount < 0) 
        return 0;

    int ways = 0;

    //use every coin
    for(int i = currentCoin; i<n; i++) {
        ways += solve(coins, n, amount - coins[i], i);
    }    

    return ways;
}

int main(){
    int coins[] = {1,2,5};
    int amount = 11;
    int size = 3;
    int ans = solve(coins, size, amount, 0);
    cout << ans;
    return 0;
}