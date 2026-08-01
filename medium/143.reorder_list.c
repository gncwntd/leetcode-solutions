/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };

find the middle
reverse the second half
merge both lists

 */
void reorderList(struct ListNode* head) {
    
    if(!head || !head->next) return;

    //1.
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while(fast -> next && fast -> next -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    //2.
    struct ListNode* prev = NULL;
    struct ListNode* current = slow -> next;
    struct ListNode* next = NULL;
    slow -> next = NULL;

    while(current){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }

    //3.
    struct ListNode* first = head;
    struct ListNode* second = prev;

    while(second){
        struct ListNode *p1 = first->next;
        struct ListNode *p2 = second->next;
        
        first -> next = second;
        second -> next = p1;

        first = p1;
        second = p2;
    }



    

    

}