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

    bool check(Node * tr1 , Node* tr2){
        if(!tr1 && !tr2) return true;
        if(!tr1 || !tr2) return false;

        return (tr1->data == tr2->data ) &&
            check(tr1->left , tr2->right) &&
            check(tr1->right , tr2->left);
        
    }

    bool isSymmetric(Node* root) {
        if(!root) return true;
        return check(root->left , root->right);
    }
};

int main() {
    
    // Example usage
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    Solution mySolution;
    bool res = mySolution.isSymmetric(root);
    cout << res << endl;
    return 0;
}