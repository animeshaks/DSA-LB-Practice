// Question -> https://leetcode.com/problems/decode-string/

#include <iostream>
#include <stack>
using namespace std;

string decodeString(string s){
    stack<pair<string, int>> st;
    int k = 0;
    string ans = "";

    for (int i = 0; i < s.length(); i++){
        if (s[i] == '['){
            st.push({ans, k});
            k = 0;
            ans = "";
        }
        else if (s[i] == ']'){
            string lastAns = st.top().first;
            int lastK = st.top().second;
            st.pop();

            while (lastK--)
                lastAns += ans;
            ans = lastAns;
        }
        else if (isdigit(s[i]))
            k = k * 10 + (s[i] - '0');
        else
            ans += s[i];
    }
    return ans;
}

int main(){

    return 0;
}