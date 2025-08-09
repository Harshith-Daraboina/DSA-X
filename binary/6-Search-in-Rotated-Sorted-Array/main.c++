#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int k) {
        int low= 0 ;
        int high = nums.size()-1;

        while(low<= high){
            int mid = low+(high - low)/2;

            if(nums[mid] == k){
                return mid;
            }

            if(nums[low]<= nums[mid]){
                if(nums[low]<= k && k < nums[mid]){
                    high =mid -1;
                }else{
                    low = mid + 1;
                }
            }
            else{
                if(nums[mid]<= k && k < nums[high]){
                    low = mid + 1;
                }else{
                    high =mid -1;
                }

            }
        }

        return -1;
    }
};

int main() {
    
    Solution obj;
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;
    int result = obj.search(arr, target);
    cout << "Index of Target: " << result << endl;
    return 0;
}