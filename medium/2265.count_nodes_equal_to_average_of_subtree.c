/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int subtree(struct TreeNode* root,int* arr, int* index){
    
    if(!root) return 0;
    
    arr[(*index)++] = root->val;
    subtree(root->left,arr,index);
    subtree(root->right,arr,index);
    
    return 0;
}


int averageOfSubtree(struct TreeNode* root) {
    
    if(!root) return 0;

    int* arr = (int*)malloc(1000*sizeof(int));
    int result = 0;

    struct TreeNode* queue[1000];
    int front = 0;
    int rear = 0;

    queue[rear++] = root;

    while(front < rear){

        struct TreeNode* current = queue[front++];

        int index = 0;

        subtree(current,arr,&index);

        int sum = 0;

        for(int i = 0; i < index;i++){
            sum += arr[i];
        }

        int average = sum / index;

        if(current->val == average) result++;

        if(current->left) queue[rear++] = current->left;
        if(current->right) queue[rear++] = current->right;

    }

    free(arr);

    return result;


}

/*

2265. Count Nodes Equal to Average of Subtree
Runtime
13
ms
Beats
28.13%
Memory
13.92
MB
Beats
3.13%
*/