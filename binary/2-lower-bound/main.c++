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
            
            if(arr[mid] < target){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        
        return low;
    }
};


int main() {
    Solution obj;
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    int result = obj.lowerBound(arr, target);
    cout << "Index of target: " << result << endl;
    
    return 0;
}