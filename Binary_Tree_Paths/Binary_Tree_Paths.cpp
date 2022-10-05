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
    vector<string> ans;
    void find(TreeNode* node, string tmp){
        if(node==0) return;
        if(node->left==0 && node->right==0){
            tmp+=to_string(node->val);
            ans.push_back(tmp);
            return;
        }
        tmp+=to_string(node->val)+"->";
        find(node->left, tmp);
        find(node->right, tmp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        find(root, "");
        return ans;
    }
};
