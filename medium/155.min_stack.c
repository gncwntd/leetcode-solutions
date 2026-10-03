

#define MAX 30000

typedef struct {
    int values[MAX];
    int min[MAX];
    int top;

} MinStack;


MinStack* minStackCreate() {
    MinStack* obj = malloc(sizeof(MinStack));
    obj->top = -1;
    return obj;
}

void minStackPush(MinStack* obj, int value) {
    obj->top++;
    obj->values[obj->top] = value;

    if(obj->top == 0){
        obj->min[obj->top] = value;
    }else{
        if(value < obj->min[obj->top - 1]){
            obj->min[obj->top] = value;
        }else{
            obj->min[obj->top] = obj->min[obj->top -1];
        }
    }
}

void minStackPop(MinStack* obj) {
    obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->values[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->min[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/


/*
155. Min Stack

Runtime
63
ms
Beats
56.62%
Memory
109.63
MB
Beats
99.87%

*/