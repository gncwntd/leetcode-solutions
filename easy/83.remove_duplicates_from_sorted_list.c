/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    struct ListNode  *node = head;
    while(node != NULL && node->next != NULL){
        if((node -> val) == (node -> next -> val)){
            struct ListNode *temp = node -> next;
            node -> next = temp -> next;
            free(temp);
        }else{
            node = node->next;
        }
    }
    return head;
}
