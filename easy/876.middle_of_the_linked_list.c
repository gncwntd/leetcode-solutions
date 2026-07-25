/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//we need to look at the slow-fast pointer solution. This one is more experimental. 

struct ListNode* middleNode(struct ListNode* head) {

    if(head == NULL) return head;

    struct ListNode* current = head;

    int size = 0;
    while(current!=NULL){
        size++;
        current = current -> next;
    }

    struct ListNode** array = malloc(size * sizeof(struct ListNode*));

    current = head;
    for(int i = 0; i < size; i++){
        array[i] = current;
        current = current -> next;
    }

    // [1,2,3,4,5] -> [3,4,5]
    
    struct ListNode* middle = array[size/2];
    
    free(array);

    return middle;



}