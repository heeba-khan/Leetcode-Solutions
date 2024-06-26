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
    vector<TreeNode*>v;
     TreeNode* balanceBST(TreeNode* root) {
        // if(root==NULL) return NULL;
        inorder(root);
        return fun(0,v.size()-1);
    }
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
    }
    
    TreeNode* fun(int start,int end){
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode* root=v[mid];
        root->left=fun(start,mid-1);
        root->right=fun(mid+1,end);
        
        return root;
    }
    
   
};

