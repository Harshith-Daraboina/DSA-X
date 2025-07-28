#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    void reverse(vector<int>& arr , int start , int end ){
        while (start < end){
            swap(arr[start++] , arr[end--]);
        }
    }


    void rotate(vector<int>& arr, int k) {
        int n = arr.size() ;

        k = k% n;
        reverse(arr , 0 , n-1);
        reverse(arr , 0 , k-1);
        reverse(arr , k , n-1);
    }
};

int main() {
    
    vector<int> arr = {1,2,3,4,5,6,7};
    Solution obj;
    obj.rotate(arr, 3);
    for(int i =0 ; i< arr.size() ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}