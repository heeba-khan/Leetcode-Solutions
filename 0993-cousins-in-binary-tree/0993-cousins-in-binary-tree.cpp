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
    int xdepth,ydepth,xparent,yparent;
    
    void fun(TreeNode* root,int x, int y,int dep,int par_val){
        if(!root) return;
        
        if(root->val==x){
            xdepth=dep;
            xparent=par_val;
            return;
        }
        
        if(root->val==y){
            ydepth=dep;
            yparent=par_val;
            return;
        }
        
        fun(root->left,x,y,dep+1,root->val);
        fun(root->right,x,y,dep+1,root->val);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x||root->val==y) return false;
        fun(root,x,y,0,0);
        
        if(xdepth==ydepth&&xparent!=yparent) return true;
        return false;
    }
};















