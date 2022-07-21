#include<iostream>
#include<vector>
using namespace std;

vector<int> diffWaysToCompute(string str){
    vector<int> ans;

    for(int i=0; i<str.length(); i++){
        if(str[i] <= '9' && str[i] >= '0' ){
            continue;
        }else{
            string a = str.substr(0, i);
            string b = str.substr(i+1);
            vector<int> v1 = diffWaysToCompute(a);
            vector<int> v2 = diffWaysToCompute(b);

            for(auto x:v1){
                for(auto y:v2){
                    if(str[i] == '-')
                        ans.push_back(x-y);
                    if(str[i] == '+')
                        ans.push_back(x+y);
                    if(str[i] == '*')
                        ans.push_back(x*y);
                }
            }

        }
    }
    // If no operator
    if(ans.size() == 0)
        ans.push_back(stoi(str));
    
    return ans;
}

int main(){
    string str = "2*3-4*5";
    vector<int> ans = diffWaysToCompute(str);

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}