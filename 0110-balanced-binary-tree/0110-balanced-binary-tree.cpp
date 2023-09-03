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
    // if && isBalanced(root->right) && isBalanced(root->left) part is not added then it will not check if       //   the subtrees are balanced or not which is necessary to be checked
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(abs(height(root->left)-height(root->right))<=1 && isBalanced(root->right) && isBalanced(root->left)) 
            return true;
        return false;
    }
};