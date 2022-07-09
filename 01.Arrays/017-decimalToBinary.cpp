#include<iostream>
#include <math.h>
using namespace std;
/*
    FORMULA : ans = (bit * pow(10,i) + ans)
*/
void toBinary(int n)
{
    int i=0;
    int ans=0;
    
    while(n != 0){
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    printf("%d",ans);
}

int main(){
    toBinary(11);
    return 0;
}