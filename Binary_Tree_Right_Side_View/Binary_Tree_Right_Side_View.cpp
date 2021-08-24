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
    vector<int> rightSideView(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        int prev,currlevel;
        vector<int>vec;
        if(!root)
            return vec;
        q.push({root,0});
        while(!q.empty()){
            pair<TreeNode*,int>ans=q.front();
            q.pop();
            if(currlevel!=ans.second){
                vec.push_back(prev);
                currlevel=ans.second;
            }
            if(ans.first->left)
            q.push({ans.first->left,currlevel+1});
             if(ans.first->right)
            q.push({ans.first->right,currlevel+1});
            prev=ans.first->val;
        }
        vec.push_back(prev);
        return vec;
        
    }
};
