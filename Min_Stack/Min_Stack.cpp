class MinStack {
public:
    typedef struct Node{
        int val;
        int minval;
        Node* next;
    }Node;
    Node* topNode;
    MinStack() : topNode(nullptr) {
        
    }
    
    void push(int val) {
        Node* s = new Node;
        if(!topNode){
            topNode = s;
            topNode->val = val;
            topNode->minval = val;
            topNode->next = nullptr;
        }else{
            s->val = val;
            s->minval = min(val, topNode->minval);
            s->next = topNode;
            topNode = s;
        }
    }
    
    void pop() {
        topNode = topNode->next;
    }
    
    int top() {
        return topNode->val;
    }
    
    int getMin() {
        return topNode->minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
