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
    unordered_map<int, int> record;
    int max = 0;
    void inorder(TreeNode* root, vector<vector<int>> &ans, int level){
        if(!root) return;

        inorder(root->left, ans, level+1);
        while(ans.size()<level+1){
            vector<int>tmp;
            ans.push_back(tmp);
        } 
        ans[level].push_back(root->val);
        inorder(root->right, ans, level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(!root) return ans;
        // vector<int> tmp;
        // ans.push_back(tmp);
        inorder(root, ans, 0);
        
        return ans;
    }
};
