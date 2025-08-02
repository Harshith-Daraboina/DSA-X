#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int low  = 0;
        
        int high = arr.size();
        
        
        while(low<high){
            int mid= (low+high)/2;
            
            if(arr[mid] >= target){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        
        return high;
    }
};


int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Solution obj;
    int target = 5;
    return 0;
}