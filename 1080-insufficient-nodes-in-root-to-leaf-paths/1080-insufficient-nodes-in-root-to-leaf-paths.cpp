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
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        if(!root) return root;
        
        if(!root->left&&!root->right){
            if(root->val<limit) return NULL;
            else return root;
        }
        else{
            root->left=sufficientSubset(root->left,limit-root->val);
            
            root->right=sufficientSubset(root->right,limit-root->val);
            
            if(!root->left&&!root->right) return NULL;
            else
                return root;
        }
    }
};