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
    void flatten(TreeNode* root) {
        if(!root) return;
        
        TreeNode* tmp_r = root->right;
        TreeNode* tmp_l = root->left;
        if(tmp_l){
            root->right = root->left;
            root->left = NULL;
            while(tmp_l->right) tmp_l = tmp_l->right;
            tmp_l->right = tmp_r;
        }
        
        flatten(root->right);
    }
};
