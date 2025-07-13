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

    void swap(Node* &a , Node* &b){
        Node* temp = a;
        a = b;
        b = temp;
    }
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node == nullptr) return ;
        
        mirror(node->left);
        mirror(node->right);
        
        swap(node->left , node->right);
    }

    void print(Node* node){
        if(node == nullptr) return ;
        cout<<node->data<<" ";
        print(node->left);
        print(node->right);
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    Solution obj;
    obj.mirror(root);
    obj.print(root);
    

    return 0;
}