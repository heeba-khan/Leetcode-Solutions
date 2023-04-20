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
//     int widthOfBinaryTree(TreeNode* root) {
//         if(root==NULL) return 0;
        
//         long long ans;
        
//         queue<pair<TreeNode*,int>>q;
//         q.push({root,0});
//         while(!q.empty()){
            
//             int l=q.size();
//             long long last=q.back().second, f=q.front().second;
//             for(int i=0;i<l;i++){
//                 TreeNode* temp;
//                 temp=q.front().first;
//                 long long ind=q.front().second;
//                 q.pop();
//                 if(temp->left!=NULL){ q.push({temp->left,ind*2+1});}
//                 if(temp->right!=NULL){ q.push({temp->right,ind*2+2});}
//             }
//             ans=max(ans,last-f+1);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) 
    {
        queue<pair<TreeNode*,long>> q;
        q.push({root,1});
        int n,start,end,dif;
        int res = 1;
        while(!q.empty())
        {
            n = q.size();
            for(int i=0; i<n; i++)
            {
                auto [node,pos] = q.front();
                q.pop();
                if(i==0)
                {
                    start = pos;
                    dif = pos-1;
                }
                if(i==n-1) end = pos;
                pos -= dif;
                if(node->left!=nullptr) q.push({node->left,pos*2-1});
                if(node->right!=nullptr) q.push({node->right,pos*2});
            }
            res = max(res,end-start+1);
        }
        return res;
    }
};