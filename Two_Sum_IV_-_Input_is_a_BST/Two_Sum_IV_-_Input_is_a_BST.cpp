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
    void inorder(TreeNode* root, vector<int> &v){
        if(!root) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        unordered_map<int, int> mp;
        inorder(root, v);
        for(int i=0;i<v.size();i++){
            mp[v[i]] = i+1;
        }
        for(int i=0;i<v.size();i++){
            if((mp[k-v[i]]>0) && (mp[k-v[i]]!=i+1)) return true;
        }
        return false;
    }
};
