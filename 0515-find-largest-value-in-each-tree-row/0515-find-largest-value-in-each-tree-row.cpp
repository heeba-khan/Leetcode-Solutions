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
 
    
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        
        if(root==NULL) return {};
        queue<TreeNode*>q;
        
        TreeNode* p;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            int m=INT_MIN;
            while(n--){
                p=q.front();
                q.pop();
                m=max(m,p->val);
                
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            v.push_back(m);
        }
      return v;
    }
};