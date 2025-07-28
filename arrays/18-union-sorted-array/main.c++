#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        int i = 0, j = 0;
        vector<int> unionArr;

        while (i < n && j < m) {
            // Skip duplicates in arr1
            if (i > 0 && arr1[i] == arr1[i - 1]) {
                i++;
                continue;
            }
            // Skip duplicates in arr2
            if (j > 0 && arr2[j] == arr2[j - 1]) {
                j++;
                continue;
            }

            if (arr1[i] < arr2[j]) {
                unionArr.push_back(arr1[i++]);
            } else if (arr1[i] > arr2[j]) {
                unionArr.push_back(arr2[j++]);
            } else { // arr1[i] == arr2[j]
                unionArr.push_back(arr1[i]);
                i++;
                j++;
            }
        }

        // Remaining elements in arr1
        while (i < n) {
            if (i == 0 || arr1[i] != arr1[i - 1]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }

        // Remaining elements in arr2
        while (j < m) {
            if (j == 0 || arr2[j] != arr2[j - 1]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }

        return unionArr;
    }
};

// Example usage
int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 4, 5, 6};
    
    Solution obj;
    vector<int> result = obj.findUnion(arr1, arr2);

    cout << "Union: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 4, 5, 6};

    Solution obj;
    vector<int> result = obj.findUnion(arr1, arr2);

    cout << "Union: ";
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}