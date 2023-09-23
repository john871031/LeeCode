/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int small = min(p->val, q->val);
        int big = max(p->val, q->val);
        TreeNode* ans = nullptr;
        while(!ans){
            if(root->val<small){
                root = root->right;
            }else if(root->val>big){
                root = root->left;
            }else{
                ans = root;
            }
        }
        return ans;
    }
};
