/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* node, unordered_map<Node*,Node*> &ans){
        vector<Node*> tmp;
        Node* index = new Node(node->val);
        ans[node] = index;
        for(auto x: node->neighbors){
            if(ans.find(x)!=ans.end()){
                // cout<<1<<endl;
                tmp.push_back(ans[x]);
            }else if(ans.find(x)==ans.end()){
                tmp.push_back(dfs(x, ans));
            }
        }
        index->neighbors = tmp;
        // cout<<index->val<<endl;
        return index;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*> ans;
        if(!node) return NULL;
        return dfs(node, ans);
    }
};
