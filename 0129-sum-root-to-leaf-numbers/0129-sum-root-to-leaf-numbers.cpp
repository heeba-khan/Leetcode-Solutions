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
     int sumNumbers(TreeNode* root) {
        int currsum=0;
        return fun(root,currsum);

    }

    int fun(TreeNode* root, int currsum){
        if(root==NULL) return 0;
        currsum=currsum*10+root->val;
        if(root->left==NULL && root->right==NULL) return currsum;

        int leftSum=fun(root->left,currsum);
        int rightSum=fun(root->right,currsum);
        return leftSum+rightSum;
    }
   
};