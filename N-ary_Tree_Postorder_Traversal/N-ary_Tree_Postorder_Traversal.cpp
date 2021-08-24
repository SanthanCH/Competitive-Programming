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
    vector<int> postorder(Node* root) {
        stack<Node*>s;
        vector<int>ans;
        if(!root)
            return ans;
        s.push(root);
        while(!s.empty()){
            Node *temp=s.top();
            ans.push_back(temp->val);
            s.pop();
            vector<Node*>res=temp->children;
            for(int i=0;i<res.size();i++)
                s.push(res[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
