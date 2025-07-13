#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int kthMissing(int* arr, int n, int k) {
    // code here
   int c = 1;
   int missing_count =0 ;
   int i =0;
   
   while (missing_count < k){
       if((arr[i] == c) && (i<n) ){
           i++;
       }else{
           
           missing_count++;
           if(missing_count == k ){
               return c;
           }
           
       }
       
       c++;
   }
   
   return -1;
}



int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout << kthMissing(arr, n, k) << endl;
    return 0;
}