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

int* dfs(struct TreeNode* root, int* arr,int* index){

    if(!root) return 0;

    dfs(root->left,arr,index);
    dfs(root->right,arr,index);
    arr[(*index)++] = root->val;


    return arr;


}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(100 * sizeof(int));

    int index = 0;

    dfs(root,arr,&index);
    *returnSize = index;
    return arr;

}

/*
145. Binary Tree Postorder Traversal
Runtime
0
ms
Beats
100.00%
Memory
9.27
MB
Beats
78.93%

*/