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
    int mx;
    int path(TreeNode*root){
        if(!root)
            return 0;
        int l=path(root->left);
        int r=path(root->right);
        int k=0,ans=1;
        if(l!=0&&root->left->val==root->val){
            k=max(k,l);
            ans+=l;
        }
        if(r!=0&&root->right->val==root->val){
            k=max(k,r);
            ans+=r;
        }
        mx=max(ans,mx);
        return 1+k;
    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root)
            return 0;
        path(root);
        return mx-1;
      //as they asked to find no.of edges(so we need to decrease by 1 ) here we found how many nodes in a path have same value
    }
};
