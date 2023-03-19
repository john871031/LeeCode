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
    TreeNode* build(vector<int>& inorder, int inindex, int inlast, vector<int>& postorder, int postindex, int postlast){
        if(inindex>inlast || postindex<postlast) return NULL;
        TreeNode* root = new TreeNode(postorder[postindex]);
        int index = inindex;
        while(postorder[postindex]!=inorder[index]) index++;
        int countRight = inlast - index;
        root->left = build(inorder, inindex, index-1, postorder, postindex-countRight-1, postlast);
        root->right = build(inorder, index+1, inlast, postorder, postindex-1, postindex-countRight);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder, 0, inorder.size()-1, postorder, postorder.size()-1, 0);
    }
};
