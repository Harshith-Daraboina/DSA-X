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
    private : 
    Node* prev;
    Node* first;
    Node* sec;
    
    void inorder( Node* root){
        if(!root) return;
        
        inorder(root->left);
        
        
        if(prev && prev->data > root->data){
            if(!first){
                first = prev;
            }
            
            sec = root;
        }
        
        prev=root;
        
        inorder(root->right);
    }
  public:
    void correctBST(Node* root) {
        
        prev=first=sec=nullptr;
        
        inorder(root);
        
        swap(first->data , sec->data);
    }
};

int main() {
    
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);

    Solution obj;
    obj.correctBST(root);
    return 0;
}