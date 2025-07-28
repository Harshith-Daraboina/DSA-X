#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;



class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> res;
        
        int n= arr.size();
        
        int max_right = arr[n-1];
       
        res.push_back(max_right);
         
        for (int i = n-2 ; i>=0 ; i--){
            if(arr[i] >= max_right){
                max_right = arr[i];
                res.push_back(arr[i]);
            }
        }
        
        reverse(res.begin() , res.end());
        
        return res;
    }
};

int main() {
    
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    Solution obj;
    vector<int> res = obj.leaders(arr);
    for(int i =0 ; i< res.size() ; i++){
        cout << res[i] << " ";
    }
    return 0;
}