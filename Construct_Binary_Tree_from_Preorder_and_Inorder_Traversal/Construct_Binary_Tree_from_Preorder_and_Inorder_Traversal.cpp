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
    TreeNode* build(vector<int>& preorder, int preindex, int prelast, vector<int>& inorder, int inindex, int inlast){
        if(preindex>prelast || inindex>inlast) return NULL;
        TreeNode* root = new TreeNode(preorder[preindex]);
        int index = inindex;
        while(preorder[preindex]!=inorder[index]) index++;
        int countLeft = index - inindex;
        root->left = build(preorder, preindex+1, preindex+countLeft, inorder, inindex, index-1);
        root->right = build(preorder, preindex+countLeft+1, prelast, inorder, index+1, inlast);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        return build(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
    }
};
