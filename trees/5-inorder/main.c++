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
    
    vector<int> inOrder(Node* root){
        vector<int > res;
        inOrderHelper(root , res);
        return res;
    }
 
 private:
    void inOrderHelper(Node* root , vector<int> &res) {
        if(root == nullptr){
            return;
        }
        
        inOrderHelper(root->left , res);
        res.push_back(root->data);
        inOrderHelper(root->right , res);
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    Solution obj;
    vector<int> res = obj.inOrder(root);
    
    for(int i =0 ; i< res.size() ; i++){
        cout << res[i] << " ";
    }
    cout << endl;
    
    return 0;
}