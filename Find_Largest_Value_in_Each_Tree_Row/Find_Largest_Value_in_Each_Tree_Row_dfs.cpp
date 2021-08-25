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
    vector<int>ans;
    void dfs(TreeNode*root,int lev){
        if(!root)
            return;
        if(lev>=ans.size())
            ans.push_back(root->val);
        else
            ans[lev]=max(ans[lev],root->val);
        dfs(root->left,lev+1);
        dfs(root->right,lev+1);
    }
    vector<int> largestValues(TreeNode* root) {
        if(!root)
            return ans;
        dfs(root,0);
        return ans;
    }
};
