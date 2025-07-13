#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
  
  int mergesort (vector<int> &arr ,  vector<int> &temp ,int lb ,int ub ){
      
      int count =0 ;
      
      if(lb< ub){
          int mid = (lb+ ub)/2;
          
          count +=mergesort (arr ,temp, lb , mid);
          count +=mergesort (arr ,temp, mid+1 , ub);
          count += merge(arr , temp ,lb ,mid+1 ,ub);
      }
      
      return count;
 
  }
   int merge(vector<int> &arr , vector<int> &temp , int lb , int mid , int ub){
       int i = lb ;
       int j = mid ;
       int k = lb;
       
       int count = 0;
       
       while (i<mid && j <= ub){
           if (arr[i] <= arr[j]){
               temp[k++] = arr[i++];
           }else{
               temp[k++] = arr[j++];
               count +=mid-i;
           }
       }
       
       while(i<mid){
           temp[k++] = arr[i++];
       }
       
       while(j<=ub){
           temp[k++] = arr[j++];
       }
       
       for (int i = lb ; i<= ub ;i++){
           arr[i] =temp[i];
       }
       
       return count;
   } 
  
  
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        // Your Code Here
       
       int n = arr.size();
       vector<int > temp(n ,0);
       
       return mergesort(arr ,temp , 0 ,n-1);
    }
};


int main () {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sol.inversionCount(arr);
    return 0;
}