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
    
    void bfs(TreeNode* root){
        
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        vector<TreeNode*> v;
        v.push_back(root);
        while(!v.empty()){
            vector<TreeNode*> tmp;
            double tmp_val = 0;
            double count = 0;
            for(auto x: v){
                if(x->left) tmp.push_back(x->left);
                if(x->right) tmp.push_back(x->right);
                tmp_val += x->val;
                count++;
            }
            ans.push_back(double(tmp_val)/double(count));
            v = tmp;
        }
        return ans;
    }
};
