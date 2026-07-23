/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    struct ListNode dummy;
    dummy.next = head;

    if(head == NULL) return head;

    struct ListNode* current = head;
    struct ListNode* prev = &dummy;

    while(current!=NULL){
        if(current -> next != NULL && current-> val == current-> next -> val){
            // keep duplicate value
            int value = current -> val;
            
            while(current != NULL && current->val == value){
                struct ListNode* temp = current;
                current = current -> next; 
                free(temp);
            }
            
            prev -> next = current;
        }else{
            prev = current;
            current = current -> next;
        }
    }

    return dummy.next;


}