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
//     TreeNode* f(vector<int>& preorder,int preStart,int preEnd,vector<int>& inorder,int inStart,int inEnd,map<int,int>mp){
//         if(preStart>preEnd||inStart>inEnd) return NULL;
        
//         TreeNode* root=new TreeNode(preorder[preStart]);
//         int inRoot=mp[root->val];
//         int numsleft=inRoot-inStart;
        
//         root->left=f(preorder,preStart+1,preStart+numsleft,inorder,inStart,inRoot-1,mp);
//         root->right=f(preorder,preStart+numsleft+1,preEnd,inorder,inRoot+1,inEnd,mp);
//         return root;
//     }
    
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         map<int,int>mp;
        
//         for(int i=0;i<inorder.size();i++){
//             mp[inorder[i]]=i;
//         }
//         TreeNode* root=f(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        
//         return root;
//     }
// };


class Solution {
public:
    map<int,int>m;
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        for(int i=0;i<in.size();i++){
            m[in[i]]=i;
        }
        TreeNode* root = build(pre,0,pre.size()-1,in,0,in.size()-1);
        return root;
    }
    TreeNode* build(vector<int>&pre,int preStart,int preEnd,vector<int>&in, int inStart,int inEnd){
        if(preStart>preEnd || inStart>inEnd)return NULL;
        TreeNode* root = new  TreeNode(pre[preStart]);
        int index = m[pre[preStart]];
        int len = index - inStart;
        root->left = build(pre,preStart+1,preStart+len,in,inStart,index-1);
        root->right = build(pre,preStart+len+1,preEnd,in,index+1,inEnd);
        return root;
    }
};