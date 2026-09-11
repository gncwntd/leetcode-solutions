/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//root->left->right

typedef struct  {
    struct TreeNode** stack;
    int capacity;
    int top;
} Stack;

Stack* newStack(int capacity){
    Stack* newStack = (Stack*)malloc(sizeof(Stack));
    newStack->stack = (struct TreeNode**)malloc(capacity*sizeof(struct TreeNode*));
    newStack->capacity = capacity;
    newStack->top = -1;
    return newStack;
}

struct TreeNode* pop(Stack* stack){
    return stack->stack[stack->top--];
}
void push(Stack* stack, struct TreeNode* node) {
    if(stack->top == stack->capacity-1) return;
    stack->stack[++stack->top] = node;
}



int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    
    if(!root){
        *returnSize = 0;
        return NULL;
    }
        

    *returnSize = 0;
    int capacity = 100;

    int* result = (int*)malloc(capacity*sizeof(int));

    Stack* stack = newStack(capacity);
    push(stack,root);

    while(stack->top != -1){
        struct TreeNode* node = pop(stack);

        result[(*returnSize)++] = node->val;

        if(node->right) push(stack,node->right);
        if(node->left) push(stack,node->left);

    }
    free(stack->stack);
    free(stack);

    return result;









}

/*
144. Binary Tree Preorder Traversal
Runtime
0
ms
Beats
100.00%
Memory
9.27
MB
Beats
78.75%
*/