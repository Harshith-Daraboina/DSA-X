#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        int n = arr.size();
       
       if(n==1) return 0;
        
        if(arr[0] >= arr[1]) return 0; 
        
        for(int i = 1 ; i< arr.size()-1 ; i++){
            if((arr[i]> arr[i-1]) & (arr[i]>=arr[i+1])){
                return i;
            }
        }
        
        if(arr[n-1] >= arr[n-2]) return n-1;
        
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1,2,3,1,5,6,4};
    int result = obj.peakElement(arr);
    cout << result << endl;
    return 0;
}