/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int compare(const void *a,const void*b){

    struct ListNode *x = *(struct ListNode **)a;
    struct ListNode *y = *(struct ListNode **)b;

    return (x->val > y->val) - (x->val < y->val);
}

struct ListNode* sortList(struct ListNode* head) {
    
    if(!head) return head;

    struct ListNode* current = head;

    int size = 0;
    while(current != NULL){
        current = current -> next;
        size++;
    }

    current = head;
    struct ListNode** arr = (struct ListNode**)malloc(size*sizeof(struct ListNode*));

    for(int i = 0; i < size; i++){
        arr[i] = current;
        current = current->next;
    }

    qsort(arr,size,sizeof(struct ListNode*),compare);

    for(int i = 0; i < size-1;i++){
        arr[i]->next = arr[i+1];
    }

    arr[size - 1]->next = NULL;


    struct ListNode* node = arr[0];

    free(arr);

    return node;

    
    
}

/*
148. Sort List
Runtime
16
ms
Beats
46.92%
Memory
27.71
MB
Beats
5.76%
*/
