/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*>q;
        vector<vector<int>>soln;
        if(!root)
            return soln;
        vector<int>ans;
        q.push(root);
        unordered_map<Node*,int>mp;
        mp[root]=0;
        int lev=0;
        while(!q.empty()){
            Node * curr=q.front();
            int data=curr->val;
             int currlev=mp[curr];
            if(lev!=currlev){
            vector<int>newans;
            soln.push_back(ans);
            ans=newans;
            lev=currlev;
            }
            ans.push_back(data);
            
            vector<Node *>child=curr->children;
           
            q.pop();
            for(int i=0;i<child.size();i++){
                q.push(child[i]);
                mp[child[i]]=currlev+1;
            }
        }
        soln.push_back(ans);
        return soln;
    }
};
