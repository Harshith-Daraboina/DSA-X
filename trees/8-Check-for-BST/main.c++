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
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        // Your code here
        vector<int> res ;
        
        return helper(root , res);
    }
    
    private:
    
    bool helper(Node* root, vector<int >& res){
        
        inorder(root , res);
        
        for(int i =1; i <res.size() ; i++){
            if(res[i] <= res[i-1]){
                return false;
            }
        }
        
        return true;
        
    }
    
    void inorder(Node* root, vector<int >& res){
        if(!root) return;
        inorder(root->left , res);
        res.push_back(root->data);
        inorder(root->right , res);
    }
};
// --------------------------------------------------------------------------------------------------------------------------------------------------------
// Min_max approach
// This is a more efficient approach that checks the BST property using min and max values.

class Solution2 {
public:
    bool isBST(Node* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
    
private:
    bool validate(Node* root, long minVal, long maxVal) {
        if (!root) return true;
        
        
        if (root->data <= minVal || root->data >= maxVal) {
            return false;
        }
        
        
        return validate(root->left, minVal, root->data) && 
               validate(root->right, root->data, maxVal);
    }
};

int main() {
    
    Node* root1 = new Node(4);
    root1->left = new Node(2);
    root1->right = new Node(6);
    root1->left->left = new Node(1);
    root1->left->right = new Node(3);
    root1->right->left = new Node(5);
    root1->right->right = new Node(7);
    Solution2 obj;
    cout << "BTS is : " << obj.isBST(root1) << endl; // Output: BTS is : 1
    return 0;
}