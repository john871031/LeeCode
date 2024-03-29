/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int level(Node* root){
        if(root==NULL) return 0;
        int depth = 0;
        for(auto val: root->children){
            depth = max(depth, level(val)+1);
        }
        return depth;
    }
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        return level(root)+1;
    }
};
