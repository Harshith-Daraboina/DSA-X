#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


class Solution {
  public:
    int search(vector<int>& arr, int k) {
        // Code Here
        int low = 0, high =arr.size()-1;
        
        while(low<= high){
            int  mid = (low + high) /2;
            
            if(arr[mid] == k){
                return mid;
            }
            
            if(arr[low] <= arr[mid]){
                if(arr[low]<=k && k< arr[mid]){
                    high = mid-1;
                }
                
                else{
                    low = mid+1;
                }
            }else{
                if(arr[mid]<k && k<=arr[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int k = 5;
    int result = obj.search(arr, k);
    cout << result << endl;
    return 0;
}