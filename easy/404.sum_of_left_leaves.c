/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    
    if(!root) return 0;

    int sum = 0;

    if(root->left && !root->left->left && !root->left->right){
        sum += root->left->val;
    }

    sum += sumOfLeftLeaves(root->left);
    sum += sumOfLeftLeaves(root->right);

    return sum;
}

/*
404. Sum of Left Leaves
Runtime
0
ms
Beats
100.00%
Memory
10.34
MB
Beats
13.54%
