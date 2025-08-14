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
    vector<int> bottomView(Node *root) {
        // Your Code Here
        
        vector<int > res;
        
        if(!root) return res;
        
        queue <pair <Node* , int>> q;
        
        map<int , int > mpp;
        
        q.push({root , 0});
        
        
        while(!q.empty()){
            auto it  = q.front();
            q.pop();
            
            Node* node = it.first;
            int line = it.second;
            
            mpp[line] =  node->data;
            
            if(node->left != NULL){
                q.push({node->left , line-1});
            }
            
            if(node->right != NULL){
                q.push({node->right , line+1});
            }
            
        }
        
        for(auto it : mpp){
            res.push_back(it.second);
        }
        
        return res;
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
    vector<int> res = mySolution.bottomView(root);
    for(auto it : res){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}