#include<iostream>
#include<vector>
using namespace std;

int multiply(int n, int ans[], int ansSize){
    int carry = 0;

    for(int i=0; i<ansSize; i++){
        int val = n * ans[i] + carry;
        int digit = val % 10;

        ans[i] = digit;
        carry = val/10;
    }

    while(carry != 0){
        int digit = carry % 10;
        ans[ansSize] = digit;
        ansSize++; 
        carry = carry/10;
    }
    return ansSize;
}

void factorial(int n){
    int ans[100000] = {1};
    int ansSize = 1;

    for(int i=1; i<=n; i++){
        ansSize = multiply(i, ans, ansSize);
    }

    // Printing
    for(int i=ansSize-1; i>=0; i--)
        cout << ans[i];
    cout<<endl;
}

// With Vector

    vector<int> factorial1(int N){
        vector<int> ans;
        ans.push_back(1);
        for(int x=1; x<=N; x++){
            int carry=0;
            for(int i=ans.size()-1;i>=0;i--){
               int value=ans[i]*x+carry;
               ans[i]=value%10;
               carry=value/10;
            }
            while(carry!=0){
               ans.insert(ans.begin(),carry%10);
               carry=carry/10;
            }
        }
        return ans;
    }

int main(){
    factorial(100);
    return 0;
}
