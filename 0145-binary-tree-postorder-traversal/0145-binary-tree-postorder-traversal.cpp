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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<pair<TreeNode*,int>> st;
       
        vector<int> pre, in, post;
        
        if(root== NULL) return post;
        
         st.push({root,1});
        
        while(!st.empty()){
            auto i=st.top();
            st.pop();
            
            if(i.second==1){
                pre.push_back(i.first->val);
                i.second++;
                st.push(i);
                if(i.first->left!=NULL){
                    st.push({i.first->left,1});
                }
            }
            else if(i.second==2){
                in.push_back(i.first->val);
                i.second++;
                st.push(i);
                if(i.first->right!=NULL){
                    st.push({i.first->right,1});
                }
            }
            else if(i.second==3){
                post.push_back(i.first->val);
            }
        }
        return post;
    }
};