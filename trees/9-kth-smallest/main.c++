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
    // Return the Kth smallest element in the given BST
    int kthSmallest(Node *root, int k) {
        // add code here.
        int count =0 ;
        
        int res = -1;
        
        
        helper(root , k , count , res);
        return res;
    }
    
  private:
    void helper(Node *root, int k , int & count , int & res){
        if(!root) return;
        
        helper(root->left , k , count ,  res);
        
        count++;
        
        if(count == k) {
            res = root->data;
            return;
        }
        
        helper(root->right , k , count , res);
        
    }
};

int main() {
    
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);

    Solution obj;
    int k = 5;
    cout << obj.kthSmallest(root, k) << endl;

    return 0;
}