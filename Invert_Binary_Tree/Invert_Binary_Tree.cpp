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
    void iT(TreeNode *node){
        TreeNode *left;
        TreeNode *right;
        if(node->left){
            left = node->left;
            iT(node->left);
        }
        if(node->right){
            right = node->right;
            iT(node->right);
        }
        node->left = right;
        node->right = left;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==0) return root;
        iT(root);
        return root;
    }
};
