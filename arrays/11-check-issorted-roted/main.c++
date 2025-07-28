#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& arr) {
        int count = 0 ;
        int n = arr.size();
        for(int i =0 ; i< n ; i++){
                if(arr[i] > arr[(i+1) % n]){
                    count++;
                }
        }
        return count <= 1;
    }
};

int main() {
    
    vector<int> arr = {4, 5, 1, 2, 3};
    Solution obj;
    cout<<obj.check(arr)<<endl;
    arr = {3, 4, 5, 1, 2};
    cout<<obj.check(arr)<<endl;
    arr = {2, 3, 4, 5, 1};
    cout<<obj.check(arr)<<endl;
    
    return 0;
}