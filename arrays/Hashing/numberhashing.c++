#include<bits/stdc++.h>
using namespace std;
// maximum size in global array can go to 10^8

int main() {
    int n;
    cin >> n;
    // maximum size in main array can go to 10^6
    int arr[n];
    for (int i = 0; i < n; i++)
    {
     cin >> arr[i];   
    }
    
    // hashing
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
     hash[arr[i]]++;   
    }

    
    int q ;
    cin >> q;
    // how many numbers and how many times its needed.....
    while (q--){
            int number ;
            cin >> number ;
            cout<< hash[number];
    }
    
    
    return 0;
}