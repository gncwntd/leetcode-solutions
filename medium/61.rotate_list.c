/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    
    if (head == NULL || head->next == NULL || k == 0) return head;

    struct ListNode* tail = head;

    int length = 1;

    while(tail->next != NULL){
        tail = tail -> next;
        length++;
    }

    int modulo = k % length;


    if (modulo == 0) return head;

    tail -> next = head;
    
    struct ListNode* current = head;

    for(int i = 0; i < length - modulo -1; i++){
        current = current -> next;  
    }

    struct ListNode* newHead = current -> next;
    current -> next = NULL;

    return newHead;
}