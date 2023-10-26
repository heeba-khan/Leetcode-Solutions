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
    
private:
    int count(TreeNode* root){
        if(!root) return 0;
        return 1+count(root->left)+count(root->right);
    }
    
    int pathSum(TreeNode* root){
        if(!root) return 0;
        
        int lh=pathSum(root->left);
        int rh=pathSum(root->right);
        
        return root->val+lh+rh;
    }
    
    void solve(TreeNode* &root,int &sum){
        if(!root) return;
        
        if(pathSum(root)/count(root)==root->val)
            sum++;
        
        solve(root->left,sum);
        solve(root->right,sum);
    }
    
public:
    int averageOfSubtree(TreeNode* root) {
        int sum=0;solve(root,sum);
        return sum;
    }
};