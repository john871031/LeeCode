class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int pop_data;
        if(!output.empty()){
            pop_data = output.top();
            output.pop();
        }else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            pop_data = output.top();
            output.pop();
        }
        return pop_data;
    }
    
    int peek() {
        if(!output.empty()) return output.top();
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
