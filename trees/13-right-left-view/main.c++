#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->val = data;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int > res;

        vector<vector<int >> levelOrder;

        levelOrder = levelorder(root);

        for(auto it : levelOrder){
            res.push_back(it.back());
        }
        return res;
    }
private: 
    vector<vector<int>> levelorder(TreeNode* root){
        vector<vector<int>> res;

        if(!root){
            return res;
        }
        
        queue <TreeNode* > q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            
            for(int i =0 ; i< size; i++){
                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if(node->left !=NULL){
                    q.push(node->left);
                }
                if(node->right !=NULL){
                    q.push(node->right);
                }
            }

            res.push_back(level);
        }

        return res;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    Solution mySolution;
    vector<int> res = mySolution.rightSideView(root);
    for(auto it : res){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}