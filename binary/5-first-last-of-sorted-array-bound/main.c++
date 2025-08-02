#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findFirst(vector<int > &nums , int k , int low , int high ){
        int first =-1;
        while (low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == k){
                first= mid;
                high = mid - 1;
            }else if(nums[mid] < k){
                low = mid +1;
            }else{
                high = mid-1;
            }   
        }

        return first;
    }
    int findLast(vector<int > &nums , int k , int low , int high ){
        int last =-1;
        while (low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == k){
                last= mid;
                low = mid + 1;
            }else if(nums[mid] < k){
                low = mid +1;
            }else{
                high = mid-1;
            }   
        }

        return last;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
       int low = 0;
       int high = nums.size() -1;
        
        int first = findFirst(nums , target , low , high);
        int sec = findLast(nums , target , low , high);

       return {first ,sec};
    }
};

int main() {
    
    Solution obj;
    vector<int> arr = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = obj.searchRange(arr, target);
    cout << "First and Last Position of Target: " << result[0] << ", " << result[1] << endl;
    
    return 0;
}