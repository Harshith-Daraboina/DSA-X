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
    int height(Node* node) {
        // code here
        if(node == nullptr) return -1;
        
        int leftHeight =  height(node->left);
        int rightHeight = height(node->right);
    
        return 1 + max(leftHeight , rightHeight);
    }
};


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    Solution obj;
    int res = obj.height(root);
    cout << res << endl;
    return 0;
}