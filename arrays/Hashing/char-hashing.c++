#include<bits/stdc++.h>
using namespace std;
// maximum size in global array can go to 10^8

int main() {
    int n;
    cin >> n;
    char arr[n];
    for (char i = 0; i < n; i++)
    {
     cin >> arr[i];   
    }
    
    // hashing
    map <char ,int> mpp;
    for(auto it : arr){
        mpp[arr[it]]++;
    }

    for(auto it : mpp){
     cout<< it.first <<"-->"<<it.second<<endl;
    }
    
    char q ;
    cin >> q;
    // how many numbers and how many times its needed.....
    while (q--){
            char number ;
            cin >> number ;
            cout<< mpp[number];
    }
    
    
    return 0;
}


// Different TYpes of sortings in the Hashinng algo
//1.Division Method
// 2.Folding Method
//3. Mid Square method


// TIme complexity 

// sorting and fetching will take log n 
// Unordered map in O(1)
// worst case O(n)
// avg case O(1)