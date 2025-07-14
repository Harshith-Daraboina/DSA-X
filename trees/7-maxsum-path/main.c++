#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
class Solution {
  public:
    // Function to find the maximum sum path in the binary tree.
    int findMaxSum(Node *root) {
       
       if(!root) return 0;
       
       maxsum = INT_MIN;
       helper(root);
       return maxsum;
        
    }
    
private: 

    int maxsum;
    
    int helper(Node* root){
        if(!root) return 0;
        
        int left = max( 0 , helper(root->left));
        int right = max(0 , helper(root->right));
        
        maxsum = max(maxsum , root->data + left +right);
        
        return root->data + max(left ,right);
    }
    
};


int main() {
    
    Node* root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(10);
    root->left->left = new Node(20);
    root->left->right = new Node(1);
    root->right->right = new Node(-25);
    root->right->left = new Node(5);
    Solution obj;
    cout << obj.findMaxSum(root) << endl; // Output: 42
    return 0;
}