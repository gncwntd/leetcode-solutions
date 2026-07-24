/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//not optimal solution

bool isPalindrome(struct ListNode* head) {
    int size = 0;
    struct ListNode* current = head;

    while(current!=NULL){
        size++;
        current = current -> next;
    }

    int* array = (int*)malloc(size * sizeof(int));

    current = head;

    for(int i = 0; i < size; i++){
        array[i] = current -> val;             
        current = current -> next;
    }

    for (int i = 0; i < size / 2; i++) {
        if(array[i] != array[size - 1 -i]){
            free(array);
            return false;
        }
    }
    
    
    free(array);
    return true;
}