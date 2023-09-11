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
        map<int,map<int,multiset<int>>> m; //v,l,n
        queue<pair<TreeNode*,pair<int,int>>> q; //n, v, l
        q.push({root,{0,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int v=it.second.first;
            int l=it.second.second;
            m[v][l].insert(it.first->val);
            if(it.first->left) q.push({it.first->left,{v-1,l+1}});
            if(it.first->right) q.push({it.first->right,{v+1,l+1}});
        }
        vector<vector<int>> ans;
        for(auto i: m){
            vector<int> col;
            for(auto j: i.second){
                col.insert(col.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};