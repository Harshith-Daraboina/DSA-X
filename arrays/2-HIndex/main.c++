#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        sort(citations.begin() , citations.end() , greater<int>());
        
            
        int h=0;
        
        for(int i =0 ; i< citations.size() ; i++){
            if(citations[i] >= i+1){
                h= i+1;
            }else{
                break;
            }
        }
        
        return h;
    }
};


int main() {
    Solution sol;

    vector<int> citations = {0, 1, 0, 2, 1, 0, 1, 3, 2, 5};
    cout << sol.hIndex(citations);

    return 0;
}