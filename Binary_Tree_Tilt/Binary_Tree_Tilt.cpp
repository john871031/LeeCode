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
    int sum = 0;
    int BTT(TreeNode* root){
        if(root==NULL) return 0;
        int left = BTT(root->left);
        int right = BTT(root->right);
        sum += abs(left-right);
        return left + right + root->val;
    }
    int findTilt(TreeNode* root) {
        if(root==NULL) return 0;
        BTT(root)-root->val;
        return sum;
    }
};
