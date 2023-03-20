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
    void DFS(TreeNode* root, vector<vector<int>> &ans, int level){
        if(!root) return;
        DFS(root->left, ans, level+1);
        while(ans.size()<level+1){
            vector<int> tmp;
            ans.push_back(tmp);
        }
        ans[level].push_back(root->val);
        DFS(root->right, ans, level+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        DFS(root, ans, 0);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
