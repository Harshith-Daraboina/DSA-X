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
    int max_diameter =0;
    
    int height(Node* node){
        if(node == nullptr){
            return 0;
        }
        
        int left = height(node->left);
        int right = height(node->right);
        
        max_diameter = max(max_diameter , left+right);
        
        return 1+ max(left , right);
    }
  
    int diameter(Node* root) {
        // Your code here
        height(root);
        return max_diameter;
    }
};

int main() {    

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    Solution obj;
    int res = obj.diameter(root);
    cout << res << endl;
    return 0;
}