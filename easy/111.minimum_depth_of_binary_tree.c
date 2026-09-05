/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int minDepth(struct TreeNode* root) {
    
    if(root == NULL) return 0;

    if(root->left == NULL) return 1 + minDepth(root->right);
    if(root->right == NULL) return  1 + minDepth(root->left);

    int leftcount = minDepth(root->right);
    int rightcount = minDepth(root->left);

    return 1 + (leftcount < rightcount ? leftcount : rightcount);

}

/*
111. Minimum Depth of Binary Tree
Runtime
7
ms
Beats
91.68%
Memory
81.18
MB
Beats
47.78%