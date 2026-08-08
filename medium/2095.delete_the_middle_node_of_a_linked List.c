/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {

    if(head==NULL || head->next== NULL) return NULL;

    struct ListNode* current = head;

    int size = 0;

    while(current != NULL){
        current = current -> next;
        size++;
    }
    
    int mid = size / 2;

    current = head;
    for(int i = 0; i < mid - 1; i++){
        current = current -> next;
    }   

    struct ListNode* temp = current -> next;
    current -> next = temp -> next;
    free(temp);

    return head;
}