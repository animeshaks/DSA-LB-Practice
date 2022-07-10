#include<bits/stdc++.h>
#include<math.h>
using namespace std;

// Using Bit Manipulation
int findComplement(int num) {
    int mask=0;
        
    while(mask < num)
        mask = (mask<<1)|1 ;
        
    int ans = (~num) & mask;
    return ans;
}

// Using Traditional Algorithm
int findComplement(int num) {
        vector<int> bin;
        int n=num;
        while(n!=0){
            int rem = n%2;
            n = n/2;
            bin.push_back(rem);
        }
        // reverse(bin.begin(),bin.end());
        
        for(int i=0;i<bin.size();i++){
            if(bin[i] == 0)
                bin[i] = 1;
            else
                bin[i] = 0;
        }
        
        int ans=0;
        
        for(int i=bin.size()-1;i>=0;i--){
            ans += bin[i] * pow(2,i);
        }
        
        return ans;
        
    }

int main(){

    return 0;
}