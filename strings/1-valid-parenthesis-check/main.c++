#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<char> res;
        int depth = 0;
        for(char it : s){
            if(it == '('){
                if(depth> 0 ){
                    res.push_back(it);
                }
            depth++;
            }else{
                depth--;
                if(depth>0){
                     res.push_back(it);
                }
            }
        }
        

        return string(res.begin() , res.end());
    }
};

int main() {
    
    Solution obj;
    string s;
    cin>>s;
    cout<<obj.removeOuterParentheses(s)<<endl;
    return 0;
}