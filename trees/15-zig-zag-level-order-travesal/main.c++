#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector <int>> res;
        if(!root) return res;


        queue <TreeNode*> q;
        q.push(root);

        bool leftToRight =true;

        while(!q.empty()){
            int size = q.size();
            deque<int> level;

            for(int i =0 ;i<size; i++){
                TreeNode* node = q.front();

                q.pop();

                if(leftToRight)  level.push_back(node->val);
                else level.push_front(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(vector<int> (level.begin() , level.end()));
            leftToRight = !leftToRight;
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

    Solution obj;
    vector<vector<int>> res = obj.zigzagLevelOrder(root);
    for(auto x : res){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}