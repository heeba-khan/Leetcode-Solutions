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
vector<int>v;

    void dfs(TreeNode* root){
        if(root==NULL) return;
        v.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }

    int minDiffInBST(TreeNode* root) {
        int result=INT_MAX;
        dfs(root);
        sort(v.begin(),v.end());
        for(int i=0;i+1<v.size();i++){
            if(v[i+1]-v[i]<result)
            {
                result=v[i+1]-v[i];
            }

        }
        return result;
    }
};