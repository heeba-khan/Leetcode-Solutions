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
    bool fun(TreeNode* root){
       if(root->left==NULL&&root->right==NULL){
           if(root->val==0)
               return false;
           return true;
       }
        bool l=fun(root->left);
        bool r=fun(root->right);
        
        if(root->val==2){
            return (l||r);
        }else
            return l&r;
    }
    
    bool evaluateTree(TreeNode* root) {
        // if(root->val==0) return 0;
        
        return fun(root);
    }
};