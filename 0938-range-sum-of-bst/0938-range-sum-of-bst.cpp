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
// class Solution {
// public:
//     vector<long long>fun(TreeNode* root,vector<long long>&v){
//         // vector<int>v;
//         if(!root) return {};
        
//         v.push_back(root->val);
//         if(root->left) fun(root->left,v);
//         if(root->right) fun(root->right,v);
        
//         return v;
//     }
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         vector<long long>v;
        
//         if(!root) return NULL;
        
//         fun(root,v);
        
//         sort(v.begin(),v.end());
//         // vector<int>ans;
//         long long sum=0;
        
//         for(int i=0;i<v.size();i++){
//             if(v[i]>=(long long)low&&v[i]<=(long long)high) 
//                 sum+=v[i];
//         }
//         return (int)sum;
//     }
// };

class Solution {
public:
    void pre(TreeNode* root,int low,int high,int &sum)
    {
        if(root==NULL)
        return;
        if(root->val<=high && root->val>=low)
        sum=sum+root->val;
        pre(root->left,low,high,sum);
        pre(root->right,low,high,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        pre(root,low,high,sum);
        return sum;
    }
};