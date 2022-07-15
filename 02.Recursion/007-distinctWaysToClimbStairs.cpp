#include<iostream>
using namespace std;


// Recursion se TLE maar jaa raha, we should solve this with either Loops of DP
int climbStairs(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    
    int ans = climbStairs(n-1) + climbStairs(n-2);

    return ans;
}

// With Loop
int climbStairs2(int n){
    int a = 1,b = 1;
    int c;
    for(int i=0;i<n-1;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}


int main(){
    int n = 5;

    cout << "Distinct Ways : " << climbStairs(n);
    return 0;
}