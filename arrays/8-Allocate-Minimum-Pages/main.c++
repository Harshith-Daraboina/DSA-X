#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
    int isPossible(vector <int> &arr ,int n , int k, int maxPage){
        int s= 1;
        int c = 0;
        
        for(int i =0  ; i< n ; i++){
            if(arr[i]> maxPage){
                return false;
            }
              if(c+ arr[i]> maxPage){
                s++;
                c = arr[i];
                
                if(s> k){
                    return false;
                }
              }else{
                  c+=arr[i];
              }
        }
        
        return true;
       
        
    }
  
  
  
  
    int findPages(vector<int> &arr, int k) {
        // code here
        int n =arr.size();
        if(k> n) return -1;
        
        int low = *min_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end() , 0);
        
        int result = -1;
        
        while(low<=high){
            int mid = (low +high) /2;
            
            
            if(isPossible(arr, n , k , mid)){
                result = mid;
                high =mid -1;
            }else{
                low = mid+1;
            }
        }
        
        return result;
    }
};



int main() {
    Solution obj;
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int k = 3;
    int result = obj.findPages(arr, k);
    cout << result << endl;
    return 0;
}