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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> node; //vertical, level, nodeval
        queue<pair<TreeNode*,pair<int,int>>> q; //node, vertical, level
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            int v=p.second.first;
            int l=p.second.second;
            node[v][l].insert(p.first->val);
            if(p.first->left){
                q.push({p.first->left,{v-1,l+1}});
            }
            if(p.first->right){
                q.push({p.first->right,{v+1,l+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto i: node){
            vector<int> col;
            for(auto j: i.second){
                col.insert(col.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};