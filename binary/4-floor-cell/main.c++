#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int findFloor(vector<int>& arr, int k) {
        // code here
        int low =0 , high = arr.size()-1;
        
        int floor = -1;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(arr[mid] <= k){
                low = mid+1;
                floor = mid;
            }else{
                high = mid - 1;
            }
        }
        
        return floor;
    }
};


int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << obj.findFloor(arr, k) << endl;
    }
    return 0;
}