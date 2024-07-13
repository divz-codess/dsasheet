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
    int goodNodes1(TreeNode* root, int hi) {
        if(root!=NULL){
            int k=goodNodes1(root->left, max(hi, root->val)) + goodNodes1(root->right, max(hi, root->val));
            if(root->val >= hi){
                k++;
            }    
            return k;
        }
        return 0;
    }
    int goodNodes(TreeNode* root) {
        return goodNodes1(root, -100000);
        
    }
};