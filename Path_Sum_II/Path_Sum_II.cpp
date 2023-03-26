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
    void inorder(TreeNode* root, int target, vector<vector<int>> &ans, vector<int>tmp, int tmpsum){
        if(!root) return ;
        tmpsum += root->val;
        tmp.push_back(root->val);
        inorder(root->left, target, ans, tmp, tmpsum);
        if(tmpsum==target && !(root->left) && !(root->right)) ans.push_back(tmp);
        inorder(root->right, target, ans, tmp, tmpsum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> tmp;
        if(!root) return ans;
        inorder(root, targetSum, ans, tmp, 0);
        return ans;
    }
};
