#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();


        if(n==0) return {};
        int count1 = 0 ;
        int count2 = 0 ;

        vector<int >res;
        int candidate1 = 0, candidate2 = 1;

        for(int it : nums){
            if(it == candidate1){
                count1++;
            }else if(it == candidate2 ){
                count2++;
            }else if(count1 == 0){
                candidate1 = it;
                count1 = 1;
            }else if(count2 == 0){
                candidate2 =it;
                count2 = 1;
            }else{
                count1--;
                count2--;
            }
        }

        count1 = 0 ,count2=0;

        for(int it : nums ){
            if(it == candidate1 ){
                count1++;
            }else if(it == candidate2){
                count2++;
            }
        }

        if(count1 > n/3) res.push_back(candidate1);
        if(count2 > n/3) res.push_back(candidate2);

        return res;
    }
};


int main() {
    
    vector<int> nums = {3,2,3};
    Solution obj;
    vector<int> res = obj.majorityElement(nums);
    for(int it : res){
        cout<<it<<" ";
    }
    return 0;
}