#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int low = 0 ;
        int high = nums.size() -1;

        while (low<= high){

            int mid = low + (high - low)/2;
            if(nums[mid] == k){
                return true;
            }

            if(nums[low] == nums[mid] && nums[high] ==nums[mid]){
                low ++;
                high--; 
                continue;
            }

            if(nums[low] <= nums[mid]){
                if(nums[low] <= k && nums[mid]< k){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }else{
                if(nums[mid] < k && nums[high]>= k){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }           
        }

        return false;
    }
};
int main() {
    

    Solution obj;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    bool result = obj.search(nums, target);
    cout << "Index of Target: " << result << endl;
    return 0;
}