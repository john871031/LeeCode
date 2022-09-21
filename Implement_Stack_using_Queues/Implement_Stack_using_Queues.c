


typedef struct {
    int *stack;
    int top;
    int size;
} MyStack;


MyStack* myStackCreate() {
    MyStack *obj = malloc(sizeof(MyStack));
    obj->stack = calloc(100, sizeof(int));
    obj->top = 0;
    obj->size = 0;
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    obj->size++;
    obj->stack[obj->size] = x;
    obj->top = x;
}

int myStackPop(MyStack* obj) {
    int pop_data = obj->stack[obj->size];
    obj->size --;
    obj->top = obj->stack[obj->size];
    return pop_data;
}

int myStackTop(MyStack* obj) {
    return obj->top;
}

bool myStackEmpty(MyStack* obj) {
    if(obj->size==0) return true;
    return false;
}

void myStackFree(MyStack* obj) {
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/
