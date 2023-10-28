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
    void traversal(TreeNode* root,int sum,vector<int>& v,int targetSum,vector<vector<int>>& ans){
        if(!root) return;
        v.push_back(root->val);
        
        if(!root->left&&!root->right){
            if(targetSum==(sum+root->val)){
                ans.push_back(v);
            }
        }
        traversal(root->left,sum+root->val,v,targetSum,ans);
        traversal(root->right,sum+root->val,v,targetSum,ans);
        v.pop_back();
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        int sum=0;
        traversal(root,0,v,targetSum,ans);
        
        return ans;
        
    }
};