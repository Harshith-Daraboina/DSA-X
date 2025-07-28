#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int maxcount =0;
        int count =0;
        int n = arr.size();

        for(int i =0 ; i< n; i++){
            if(arr[i]== 1){
                count++; 
                maxcount = max(maxcount , count);
            }else{
                count=0;
            }
        }
        return maxcount;
    }
};

int main() {
    
    vector<int> arr = {1, 1, 0, 1, 1, 0};
    Solution obj;
    cout<<obj.findMaxConsecutiveOnes(arr)<<endl;
    arr = {1, 1, 1, 0, 1, 1, 1};
    return 0;
}