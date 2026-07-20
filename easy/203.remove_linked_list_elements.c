/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    
    while (head != NULL && head->val == val) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }

    if (head == NULL)
        return NULL;

    struct ListNode* node = head;

    while (node->next != NULL) {
        if (node->next->val == val) {
            struct ListNode* temp = node->next;
            node->next = node->next->next;
            free(temp);
        } 
        else {
            node = node->next;
        }
    }

    return head;
}