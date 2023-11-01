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
        void inorder(TreeNode* root,vector<int>& ans){
            if(!root) return;
            ans.push_back(root->val);
            inorder(root->left,ans);
             inorder(root->right,ans);
        }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        unordered_map<int,int>mp;
        int maxi=0;
        
        for(int val:v){
            mp[val]++;
            
            maxi=max(maxi,mp[val]);
        }
        vector<int>ans;
        for(const auto& x:mp){
            if(x.second==maxi)
                ans.push_back(x.first);
        }
        return ans;
    }
};