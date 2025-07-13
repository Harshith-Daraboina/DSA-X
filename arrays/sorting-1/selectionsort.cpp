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
    for(int i = 0 ;  i<= n-2 ; i++){
        int min =i;
        for(int j= i; j<=n-1 ;j++){
            if(arr[j]< arr[i]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr [i];
        arr[i] = temp;
    }
    
    // result    // 
    cout<<"Sorted Array : "<<endl;
    for(int i=0 ; i< n ; i++){
        cout << arr[i]<< endl;
    }
    return 0;
}




// time complexity of this algo best worst and the avg wil be :: O(n^2);

// n + n-1 + n-2 +.......+1 == n^2-n(n-1)/2

