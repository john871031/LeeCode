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
    int count = 0;
    vector<int> dfs(TreeNode* root){
        if(!root) return {0,0};
        vector<int> left = dfs(root->left);
        vector<int> right = dfs(root->right);
        int sum = root->val + left[0] + right[0];
        int num = left[1] + right[1] + 1;        

        if((sum/num)==root->val) count++;
        return {sum, num};
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return count;
    }
};
