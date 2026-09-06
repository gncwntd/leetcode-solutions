/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    
    if(root == NULL) return root;

    struct TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);
    return root;
}

/*
226. Invert Binary Tree
Runtime
0
ms
Beats
100.00%
Memory
9.44
MB
Beats
2.35%
