/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void fun(TreeNode* root, unordered_map<int,int>&mp){
        if(root==NULL) return;
        
        mp[root->val]++;
        fun(root->left,mp);
        fun(root->right,mp);
        
    }
    
    vector<int> findMode(TreeNode* root) {
       unordered_map<int,int>mp;
        fun(root,mp);
        
        vector<int>v;
        int maxi=0;
        
        for(auto &i:mp){
            if(i.second>maxi)
                maxi=i.second;
        }
        
        for(auto &i:mp){
            if(i.second==maxi)
                v.push_back(i.first);
        }
        return v;
    }
};