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
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        if(!root) return nullptr;
        
        if(n1->data < root->data && n2->data <root->data){
            return LCA(root->left , n1 , n2 );
        }else if(n1->data > root->data && n2->data > root->data)
        {
            return LCA(root->right , n1 , n2);
        }else return root;
        
    }
};
int main() {
    
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    Solution obj;
    Node* n1 = new Node(2);
    Node* n2 = new Node(4);
    cout << obj.LCA(root, n1, n2)->data << endl;
    return 0;
}