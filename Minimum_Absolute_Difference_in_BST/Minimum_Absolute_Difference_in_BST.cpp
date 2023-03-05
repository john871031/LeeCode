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
    int ans;
    int prevalue;
    void check(TreeNode* node){
        if(node==NULL) return;
        check(node->left);
        // cout<<prevalue<<' '<<node->val<<endl;
        ans = min(abs(node->val - prevalue), ans);
        prevalue = node->val;
        check(node->right);
    }
    int getMinimumDifference(TreeNode* root) {
        ans = INT_MAX;
        prevalue = INT_MAX;
        check(root);
        return ans;
    }
};
