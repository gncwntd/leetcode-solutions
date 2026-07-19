/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    
    struct ListNode *node = list1;
    struct ListNode *node2 = list1;

    while(node2->next != NULL){
        node2 = node2 -> next;
    } 
    node2->next = list2;

    for(struct ListNode *i = node;i != NULL;i = i->next){

        //define min val 
        struct ListNode *min_val = i;
        for(struct ListNode *j = i->next;j != NULL; j = j->next){
            if(j->val < min_val->val){
                min_val = j;
            }
        }
        //swap
        int temp = i -> val;
        i -> val = min_val-> val;
        min_val -> val = temp;
    }
    return node;
}