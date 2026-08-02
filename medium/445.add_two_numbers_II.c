/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct Stack {
    struct ListNode* head;
    int size;
};
struct Stack* createStack(){
    struct Stack* s = malloc(sizeof(struct Stack));
    s->head = NULL;
    s->size = 0;
    return s;
}
void push(struct Stack *s, int val){
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = s->head;
    s->head = newNode;
    s->size++;
}
int pop(struct Stack *s) {
    if (s->size == 0) {
        return ' ';
    }
    struct ListNode *popped = s->head;
    s->head = s->head->next;
    int poppedValue = popped->val;
    free(popped);
    s->size--;
    return poppedValue;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct Stack* s1 = createStack();
    struct Stack* s2 = createStack();

    while(l1){
        push(s1,l1->val);
        l1 = l1 -> next;
    }
    while(l2){
        push(s2,l2->val);
        l2 = l2 -> next;
    }

    int carry = 0;
    struct ListNode* head = NULL;

    while(s1->size > 0 || s2->size > 0 || carry != 0){
        
        int sum = carry;
        
        if(s1->size){
            sum += pop(s1);
        }
        
        if(s2->size){
            sum += pop(s2);
        }

        carry = sum / 10;

        struct ListNode* node = malloc(sizeof(struct ListNode));

        node -> val = sum % 10;
        node -> next = head;
        head = node;

       





    }

    
    free(s1);
    free(s2);
    
    return head;

}