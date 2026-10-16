
typedef struct {

    int requests[10000];        //hold times
    int front;                  //front of the queue
    int rear;                   //enqueue


} RecentCounter;


RecentCounter* recentCounterCreate() {
    RecentCounter* obj = malloc(sizeof(RecentCounter));

    obj->front = 0;
    obj->rear = 0;

    return obj;
}

//[t - 3000, t]

int recentCounterPing(RecentCounter* obj, int t) {
    
    // add new request
    obj->requests[obj->rear] = t;
    obj->rear++;

    // discard < 3000
    while (obj->front < obj->rear && obj->requests[obj->front] < t - 3000) {
        obj->front++;
    }

    // remain
    return obj->rear - obj->front;
}

void recentCounterFree(RecentCounter* obj) {
    free(obj);
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 
 * recentCounterFree(obj);


Runtime
11
ms
Beats
86.59%
Memory
42.60
MB
Beats
21.51%

*/