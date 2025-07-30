#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution1 {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int >> dp(m , vector<int >(n,1) );

        for(int i =1 ; i< m ; i++){
            for(int j = 1 ; j< n ; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        return dp[m-1][n-1];

    }
};

class Solution2 {
public:
    int uniquePaths(int m, int n) {
        long long res  = 1 ;

        int N = (n + m- 2);

        int k = min((n-1) , (m-1));

        for(int i = 1 ; i <= k ; i++){
            res *= (N-k +i)/i;
        }
        return (int)res;

    }
};
int main() {
    
    int m = 3, n = 7;
    Solution1 obj1;
    int res1 = obj1.uniquePaths(m, n);
    cout << "Using DP: " << res1 << endl;
    Solution2 obj2;
    int res2 = obj2.uniquePaths(m, n);
    cout << "Using Recursion: " << res2 << endl;
    return 0;
}