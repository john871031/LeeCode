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
    TreeNode* first;
    TreeNode* second;
    TreeNode* pre;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        if(first==NULL && root->val<pre->val){
            first = pre;
        }
        if(first!=NULL && root->val<pre->val){
            second = root;
        }
        pre = root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        first = NULL;
        second = NULL;
        pre = new TreeNode(INT_MIN);
        inorder(root);
        swap(first->val, second->val);
    }
};
