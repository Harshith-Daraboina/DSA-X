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
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        
        vector<int> res;
        
        if(!root) return res;
        
        map<int , int> mpp ;
        
        queue <pair <Node * , int>> q;
        
        q.push({root , 0});
        
        while(!q.empty()){
            
            auto p = q.front();
            q.pop();
            
            Node* node  = p.first;
            int line = p.second;
            
            if(mpp.find(line) == mpp.end()) {
                mpp[line]  = node->data;
            } 
            
            if(node->left != NULL) q.push({node->left , line-1});
            if(node->right != NULL) q.push({node->right , line+1});
        }
        
        for(auto &it : mpp ){
            res.push_back(it.second);
        }
        
        return res;
    }
};


int main() {
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution obj;
    vector<int> res = obj.topView(root);
    for(auto x : res){
        cout<<x<<" ";
    }
    return 0;
}