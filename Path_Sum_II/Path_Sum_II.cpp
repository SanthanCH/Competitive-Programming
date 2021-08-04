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
    void find(TreeNode*root, int TargetSum,vector<int>ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL&&root->right==NULL)
        {   ans.push_back(root->val);
           TargetSum-=root->val;
            if(TargetSum==0)
                soln.push_back(ans);
            return;
        }
        int data=root->val;
        ans.push_back(data);
        TargetSum-=data;
        find(root->left,TargetSum,ans);
         find(root->right,TargetSum,ans);
        ans.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return soln;
        vector<int>ans;
        find(root,targetSum,ans);
        return soln;
    }
    private:
    vector<vector<int>>soln;
};
