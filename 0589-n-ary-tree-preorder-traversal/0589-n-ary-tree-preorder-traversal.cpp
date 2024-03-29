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
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<Node*> s;
        s.push(root);
        while(!s.empty()){
            Node *i=s.top();
            s.pop();
            ans.push_back(i->val);
            for(int it=i->children.size()-1;it>=0;it--){
                s.push(i->children[it]);
            }
        }
        return ans;
    }
};