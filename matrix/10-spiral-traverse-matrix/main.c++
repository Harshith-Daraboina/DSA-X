#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int top = 0 ;
        int left =0 ;
        int bottom = mat.size()-1;
        int right = mat[0].size()-1;
        vector<int> result;
        
        while(top<= bottom && left<=right){
            for(int i =left; i<= right ; i++){
                result.push_back(mat[top][i]);
            }
            top++;
            
            for(int i = top ;i <= bottom; i++ ){
                result.push_back(mat[i][right]);
            }
            right--;
            
            if(top<=bottom){
                for(int i = right; i>=left; i--){
                    result.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            if(left<= right){
                for(int i = bottom ; i>=top ; i--){
                    result.push_back(mat[i][left]);
                }
                left++;
            }
        }
    
        return result;
    }
};


int main() {
    vector<vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    Solution obj;
    vector<int> result = obj.spirallyTraverse(mat);
    for(int i =0 ; i< result.size() ; i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}