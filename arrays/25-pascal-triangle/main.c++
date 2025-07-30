#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector< vector<int >> triangle;


        for(int i =0 ; i< numRows ; i++){
            vector<int > row (i+1 , 1);

                for(int j = 1 ; j < i ; j++){
                    row[j] = triangle[i-1][j-1]+ triangle[i-1][j]; 
                }

                triangle.push_back(row);
        }

        return triangle;
    }
};

int main() {
    
    int numRows;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> numRows;
    Solution obj;
    vector<vector<int>> res = obj.generate(numRows);
    cout << "Pascal's Triangle: \n";
    for(int i = 0 ; i< res.size() ; i++){
        for(int j = 0 ; j< res[i].size() ; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}