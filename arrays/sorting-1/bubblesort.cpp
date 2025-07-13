#include<bits/stdc++.h>
using namespace std;


void swap(int a ,int b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int n;
    cin>> n;
    int arr[n];
    for(int i=0 ; i< n ;i++){
        cin >> arr[i];
    }

    
    // sorting
    for(int i = n-1 ;  i>0 ; i--){
        for(int j= 0; j<=i-1 ;j++){
            if(arr[j+1]< arr[j]){
               
                int temp = arr[j+1];
                arr[j+1] = arr [j];
                arr[j] = temp;
            }
        }
    }
    
    // result    // 
    cout<<"Sorted Array : "<<endl;
    for(int i=0 ; i< n ; i++){
        cout << arr[i]<< endl;
    }
    return 0;
}




// time complexity of this algo best worst and the avg wil be :: O(1), O(n^2) , O(n);


