/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        vector<Node*> v;
        v.push_back(root);

        while(!v.empty()){
            vector<Node*> tmp;
            for(auto x : v){
                if(x->left) tmp.push_back(x->left);
                if(x->right) tmp.push_back(x->right);
            }
            for(int i=0;i<v.size()-1;i++){
                v[i]->next = v[i+1];
            }
            v = tmp;
        }
        return root;
    }
};
