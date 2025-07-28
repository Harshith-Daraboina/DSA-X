#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int exsum = n*(n+1)/2;
        int sum = 0;
        for(int i =0 ; i< n ; i++){
            sum+= arr[i];
        }

        return exsum - sum;
    }
};

int main() {
    
    vector<int> arr = {3, 0, 1};
    Solution obj;
    cout<<obj.missingNumber(arr)<<endl;
    return 0;
}