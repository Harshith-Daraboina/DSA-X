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
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector <int > res;
         if(!isLeaf(root)){
            res.push_back(root->data);
        }
        
        addleftnodes(root->left , res);
        addleafnodes(root , res);
        addreverseright(root->right , res);
        
        return res;
    }
   private:
   
        bool isLeaf(Node *root){
            return !(root->left) && !(root->right);
        }
   
        void addleftnodes(Node* root , vector <int >&res){
            if(root == nullptr) return;
            
            
            if( isLeaf(root)){
                return;
            }
            
            res.push_back(root->data);
            
           if(root->left){
              addleftnodes(root->left , res);
           } else{
               addleftnodes(root->right ,res);
           }
           
        }
        
        void addleafnodes(Node* root , vector <int >&res){
            
            
            if(root == nullptr) return;
           
            
            if(isLeaf(root)){
                res.push_back(root->data);
                return;
            }
            
            addleafnodes(root->left , res);
            addleafnodes(root->right , res);
            
        }
        
        
        
        void addreverseright(Node* root , vector <int >&res){
            if(root == nullptr) return;
            
            if( isLeaf(root)){
                return;
            }
            
            if(root->right){
              addreverseright(root->right , res);
           } else{
               addreverseright(root->left ,res);
           }
           
           res.push_back(root->data);
           
        }
        
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    Solution obj;
    vector<int> res = obj.boundaryTraversal(root);
    
    for(int i =0 ; i< res.size() ; i++){
        cout << res[i] << " ";
    }
    cout << endl;
    
    return 0;
}