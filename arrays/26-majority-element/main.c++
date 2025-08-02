#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count  =0 ;
        int current =0 ;

        for(int it : nums ){
            if(count == 0){
                current = it;
            }
            count += (it == current )? 1 : -1;
        }

        return current;
    }
};

int main() {
    
    vector<int> nums = {3, 2, 3};
    Solution obj;
    cout << "Majority Element: " << obj.majorityElement(nums) << endl;
    nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << obj.majorityElement(nums) << endl;
    nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Majority Element: " << obj.majorityElement(nums) << endl;
    
    return 0;
}