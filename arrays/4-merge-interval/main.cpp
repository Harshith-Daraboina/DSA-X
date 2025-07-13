#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        if(arr.empty()){

        }
        
        sort(arr.begin() , arr.end());
        
        vector<vector<int>> merged;
        
        merged.push_back(arr[0]);
        
        for(int i = 1 ; i< arr.size() ; i++){
            vector<int> &last = merged.back();
            vector<int> &current = arr[i];
            
            if(current[0] <= last[1]){
                last[1] = max(last[1] , current[1]);
            }else{
                merged.push_back(current);
            }
        }
        
        return merged;
    }
};

int main() {
    Solution s;
    vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = s.mergeOverlap(arr);
    for(auto i : res){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}