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
    int sumfl(TreeNode* node, bool isleft){
        if(node==0) return 0;
        if(node->left==0 && node->right==0){
            if(isleft) return node->val;
            else return 0;
        }
        return sumfl(node->left, true) + sumfl(node->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return sumfl(root, false);
    }
};
