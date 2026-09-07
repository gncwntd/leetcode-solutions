/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* bst(int* nums, int left, int right){

    if(left>right) return NULL;

    int mid = left + (right - left) / 2;

    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    root->val = nums[mid];
    root->left = bst(nums,left,mid - 1);
    root->right = bst(nums,mid + 1,right);

    return root;

}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {

    return bst(nums, 0 , numsSize - 1);

}

/*
108. Convert Sorted Array to Binary Search Tree
Runtime
0
ms
Beats
100.00%
Memory
16.52
MB
Beats
70.96%

*/