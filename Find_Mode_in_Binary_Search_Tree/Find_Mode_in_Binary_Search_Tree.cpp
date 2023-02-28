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
    void order(TreeNode* node, unordered_map<int, int>& Mymap){
        if(node==NULL) return;
        order(node->left, Mymap);
        Mymap[node->val]++;
        order(node->right, Mymap);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int tmp;
        unordered_map<int, int> Mymap;
        order(root, Mymap);
        int max = INT_MIN;
        for(auto num: Mymap){
            // cout<<num.first<<num.second<<endl;
            if(num.second>max){
                max = num.second;
            } 
        }
        for(auto num: Mymap){
            if(num.second==max){
                ans.push_back(num.first);
            } 
        }
        
        return ans;
    }
};
