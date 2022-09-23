


typedef struct {
    int* queue;
    int bottom_index;
    int front;
    int size;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj = malloc(sizeof(MyQueue));
    obj->queue = calloc(100, sizeof(int));
    obj->bottom_index = 1;
    obj->front = 0;
    obj->size = 0;
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->size++;
    obj->queue[obj->size] = x;
    if(obj->size == obj->bottom_index) obj->front = x;
}

int myQueuePop(MyQueue* obj) {
    int pop_data = obj->front;
    obj->bottom_index++;
    obj->front = obj->queue[obj->bottom_index];
    return pop_data;
}

int myQueuePeek(MyQueue* obj) {
    return obj->front;
}

bool myQueueEmpty(MyQueue* obj) {
    if(obj->bottom_index>obj->size) return true;
    return false;
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
