#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int i = 0 , j = 0;
        int n = a.size();
        int m = b.size();
        int val = 0;
        int t=0;
        
        while(i < n && j< m){
            if(a[i]<b[j]){
                val = a[i++];
            }else{
                val = b[j++];
            }
            t++;
            
            if(t == k){
                return val;
            }
        }
        
        while(i< n){
             val = a[i++];
             t++;
             if(t == k){
                return val;
            }
        }
        while(j< m){
             val = b[j++];
             t++;
             if(t == k){
                return val;
            }
        }
        
    }
};

int main() {
    Solution obj;
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {6,7,8,9,10};
    int k = 0;
    int result = obj.kthElement(a, b, k);
    cout << result << endl;
    return 0;
}