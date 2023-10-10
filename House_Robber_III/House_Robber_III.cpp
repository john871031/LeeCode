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
    vector<int> dfs(TreeNode* root){
        vector<int> res(2, 0);
        if(!root) return res;
        vector<int> left = dfs(root->left);
        vector<int> right = dfs(root->right);
        res[0] = max(left[0], left[1]) + max(right[0], right[1]);
        res[1] = left[0] + right[0] + root->val;
        return res;
    }
    int rob(TreeNode* root) {
        //res[0] 代表不包含自己
        //res[1] 代表包含自己 + 不包含自己的左右節點
        vector<int> res = dfs(root);
        return max(res[0], res[1]);
    }
};
