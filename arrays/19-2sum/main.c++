#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int , int > seen;
        int n = arr.size();
        for(int i= 0 ; i< n ; i++){
            int complement = target - arr[i];
            
            if(seen.count(complement)){
                return {seen[complement] , i};
            }

            seen[arr[i]] = i;
        }

        return {};
    }
};

int main() {
    
    vector<int> arr = {2, 9,4,7, 11, 15};
    int target = 9;
    Solution obj;
    vector<int> res = obj.twoSum(arr, target);
    for(int i=0 ; i<res.size() ; i++){
        cout << res[i] << " ";
    }
    return 0;
}