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
//     int fun(TreeNode* root,int sum){
//         if(root==NULL) return 0;
//         sum=0;
//         vector<int>v;
//         if(root->left&&root->right) {
//             root->val=abs(root->left->val-root->right->val);
//             v.push_back(root->val);
//         }
//         else if(!root->left&&!root->right) v.push_back(0);
//         else if(!root->left&&root->right) v.push_back(abs(0-root->right->val));
//         else v.push_back(abs(root->left->val-0));
        
//         fun(root->left);
//         fun(root->right);
        
//         return accumulate(v.begin(),v.end(),sum);
//     }
    int sum=0;
    
    int dfs(TreeNode* root){
        int left=(root->left?dfs(root->left):0);
        int right=(root->right?dfs(root->right):0);
        
        sum+=abs(left-right);
        return left+right+root->val;
    }
    
    int findTilt(TreeNode* root) {
        // int sum=0;
        // fun(root);
        if(root) dfs(root);
        return sum;
    }
};