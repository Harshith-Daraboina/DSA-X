#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;
        int min_price = INT_MAX;
        for(int price : prices){
            if(price < min_price){
                min_price = price;
            }else{
                profit = max(profit , price-min_price);
            }
        }

        return profit;
    }
};

int main() {
    

    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution obj;
    cout << "Maximum profit: " << obj.maxProfit(prices) << endl;
    vector<int> prices2 = {7, 6, 4, 3,  1};
    cout << "Maximum profit: " << obj.maxProfit(prices2) << endl;
    return 0;
}