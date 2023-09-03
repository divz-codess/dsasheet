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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        diameterz(root,diameter);
        return diameter;
    }
    int diameterz(TreeNode* root,int &diameter){
        if(root==NULL) return 0;
        
        int lh=diameterz(root->left,diameter);
        int rh=diameterz(root->right,diameter);
        
        diameter=max(diameter,lh+rh);//updating diameter if a longer path is found
        
        return 1+max(lh,rh);//current subtree ki height
    }
};