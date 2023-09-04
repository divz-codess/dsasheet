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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool ltor=true;
        while(!q.empty()){
            int size=q.size();
            vector<int> level(size);
            for(int i=0;i<size;i++){
                TreeNode* nnode=q.front();
                q.pop();
                int index=ltor?i:size-1-i;
                level[index]=nnode->val;
                if(nnode->left!=NULL){
                    q.push(nnode->left);
                }
                if(nnode->right!=NULL){
                    q.push(nnode->right);
                }
            }
            ltor=!ltor;
            ans.push_back(level);
        }
        return ans;
    }
};