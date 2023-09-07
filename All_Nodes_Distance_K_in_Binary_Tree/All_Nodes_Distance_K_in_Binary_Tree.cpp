/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_set<int> visited;
    unordered_map<int, TreeNode*> parents;
    TreeNode* start = NULL;
    vector<int> ans;
    void dfs(TreeNode* target, int k){
        if(target==NULL || visited.count(target->val)>0) return ;
        if(k==0) ans.push_back(target->val);
        visited.insert(target->val);
        dfs(parents[target->val], k-1);
        dfs(target->left, k-1);
        dfs(target->right, k-1);
    }
    void findparents(TreeNode* root, TreeNode* p){
        if(p!=NULL) parents[root->val] = p;
        if(root->left!=NULL) findparents(root->left, root);
        if(root->right!=NULL) findparents(root->right, root);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        findparents(root, NULL);
        dfs(target, k);
        return ans;
    }
};
