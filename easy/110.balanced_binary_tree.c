/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int dfs(struct TreeNode* root) {
    if (!root) return 0;

    int leftHeight = dfs(root->left);
    int rightHeight = dfs(root->right);
    
    if (leftHeight == -1) return -1;
    if (rightHeight == -1) return -1;
    if (abs(leftHeight - rightHeight) > 1) return -1;

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

bool isBalanced(struct TreeNode* root) {
    return dfs(root) != -1;
}

/*
110. Balanced Binary Tree
Runtime
0
ms
Beats
100.00%
Memory
12.97
MB
Beats
96.47%

*/