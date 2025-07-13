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
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        vector<vector <int>> res;
        
        if(root == nullptr) return res;
        
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            vector<int > level ;
            int n = q.size();
            
            for(int i =0 ; i< n ; i++){
                Node* node = q.front();
                q.pop();
                
                level.push_back(node->data);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            
            }
            
            res.push_back(level);
            
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
    
    Solution obj;
    vector<vector<int>> res = obj.levelOrder(root);
    
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }   
        cout<<endl;
    }
    
    return 0;
}
