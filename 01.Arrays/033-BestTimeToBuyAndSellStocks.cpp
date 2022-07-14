#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices){
    int max = 0;
    int currentMinimum = prices[0];
    for (int i = 1; i < prices.size(); i++){
        if (prices[i] < currentMinimum){
            currentMinimum = prices[i];
        }
        else if (prices[i] - currentMinimum > max){
            max = prices[i] - currentMinimum;
        }
    }
    return max;
}

int main(){

    return 0;
}