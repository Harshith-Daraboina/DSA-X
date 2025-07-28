#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int pos = 0;
        int n = arr.size();
        for(int i =0 ;i < n ; i++){
            if(arr[i]!= 0 ){
                arr[pos++] = arr[i];
            }
        }

        while(pos<n){
            arr[pos++] = 0;
        }
    }
};
int main() {
    Solution obj;
    vector<int> arr = {0, 1, 0, 3, 12};
    obj.moveZeroes(arr);
    for(int i =0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}