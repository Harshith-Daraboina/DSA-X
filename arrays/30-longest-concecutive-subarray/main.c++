#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:

    int longestConsecutive(vector<int>& arr) {
    
        unordered_set<int> s(arr.begin() , arr.end());
        
        int longest = 0;
        for(int it : s ){
        if(!s.count(it-1)){
               
            int current = it;
            int count = 1;
                while(s.count(current+1)){
                    current++;
                    count++;
                }
                
                longest = max (count , longest);
            
            }
        }
        
        return longest;
        
    }
};

int main() {
    Solution obj;
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    int result = obj.longestConsecutive(arr);
    cout << "Length of the longest consecutive elements sequence: " << result << endl;
    arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    result = obj.longestConsecutive(arr);
    cout << "Length of the longest consecutive elements sequence: " << result << endl;
    arr = {10, 20, 30, 40, 50, 60};
    result = obj.longestConsecutive(arr);
    cout << "Length of the longest consecutive elements sequence: " << result << endl;
    
    return 0;
}