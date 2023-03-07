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
    int hight(TreeNode* node, int &max_len){
        int left;
        int right;
        if(node==NULL) return 0;
        
        left = hight(node->left, max_len);
        right = hight(node->right, max_len);
        max_len = max(max_len, left+right);
        return 1+max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int max_len = 0;
        hight(root, max_len);
        return max_len;
    }
};
