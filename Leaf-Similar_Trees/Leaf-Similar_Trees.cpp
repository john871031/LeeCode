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
    void dfs(TreeNode* root, vector<int>& res){
        if(!root->left && !root->right){
            res.push_back(root->val);
            return;
        }
        if(root->left) dfs(root->left, res);
        if(root->right) dfs(root->right, res);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1;
        vector<int> r2;
        dfs(root1, r1);
        dfs(root2, r2);
        return r1==r2;
    }
};
