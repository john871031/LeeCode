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
    void dfs(TreeNode* root, int min, long &second){
        if(!root) return ;
        if(root->val>min && root->val<second) second = root->val;
        dfs(root->left, min, second);
        dfs(root->right, min, second);
    }
    int findSecondMinimumValue(TreeNode* root) {
        int min = root->val;
        long second = 2147483648;
        dfs(root, min, second);
        if(second==2147483648) return -1;
        return second;
    }
};
