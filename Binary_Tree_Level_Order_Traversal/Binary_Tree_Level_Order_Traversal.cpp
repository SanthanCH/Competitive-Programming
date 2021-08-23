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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int currlevel=0;
        vector<vector<int>>ans;
        if(!root)
            return ans;
        vector<int>res;
        while(!q.empty()){
            pair<TreeNode*,int>ans1=q.front();
            q.pop();
            if(ans1.second!=currlevel){
                ans.push_back(res);
                currlevel=ans1.second;
                res.clear();
            }
            res.push_back(ans1.first->val);
            if(ans1.first->left)
            q.push({ans1.first->left,ans1.second+1});
            if(ans1.first->right)
            q.push({ans1.first->right,ans1.second+1});
        }
        ans.push_back(res);
        return ans;
    }
};
