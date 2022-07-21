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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==0) return false;
        if(root->left!=0){
            root->left->val += root->val;
        }
        if(root->right!=0){
            root->right->val += root->val;
        }
        if(root->left==0 && root->right==0 && root->val==targetSum){
            return true;
        }
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};
