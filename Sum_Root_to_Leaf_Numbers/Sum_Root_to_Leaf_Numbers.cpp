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
    int sum;
    void inorder(TreeNode* root, int preval){
        if(!root) return;
        root->val += preval*10;
        preval = root->val;
        // cout<<root->val<<endl;
        inorder(root->left, preval);
        inorder(root->right, preval);
        if(!(root->left) && !(root->right)) sum += root->val;
    }
    int sumNumbers(TreeNode* root) {
        
        inorder(root, 0);
        return sum;
    }
};
