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
    void fun(TreeNode* root, vector<int>&v){
        if(!root) return;
        
        fun(root->left,v);
        v.push_back(root->val);
        fun(root->right,v);
        
    }
    
    int findSecondMinimumValue(TreeNode* root) {
       vector<int>ans;
       fun(root,ans);
        sort(ans.begin(),ans.end());
        
        int mini=ans[0];
        int n=ans.size();
        
        if(ans[0]==ans[n-1]) return -1;
        
        for(int i=0;i<n;i++){
            if(mini<ans[i]){
                mini=ans[i];
            break;
            }
        }
        return mini;
    }
};

// class Solution {
// public:
//     void push(TreeNode* root, vector<int> & v){
//         if(!root){
//             return;
//         }
//         push(root->left,v);
//         v.push_back(root->val);
//         push(root->right,v);
//     }
//     int findSecondMinimumValue(TreeNode* root) {
//         vector<int> ans;
//         push(root,ans);
//         sort(ans.begin(),ans.end());
//         int mini = ans[0];
//         int n = ans.size();
//         if(ans[0]==ans[n-1]){
//             return -1;
//         }
//         for(int i = 0 ; i<n ; i++){
//             if(mini<ans[i]){
//                 mini = ans[i];
//                 break;
//             }
//         }
//         return mini;
//     }
// };