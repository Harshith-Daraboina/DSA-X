#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        set<int> st ;
        int n = arr.size();
        for(int i=0 ; i < n; i++){
            st.insert(arr[i]);
        }

        int k = st.size();
        int index = 0;
        for(auto it : st){
            arr[index++] = it;
        } 
        return k;
    }
};

int main() {
    
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    Solution obj;
    int res = obj.removeDuplicates(arr);
    for(int i =0 ; i< res ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}