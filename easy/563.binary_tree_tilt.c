/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int dfs(struct TreeNode* root, int* tilt){
    if(!root) return 0;

    int left = dfs(root->left,tilt);
    int right = dfs(root->right,tilt);

    *tilt += abs(left - right);

    return root->val + left + right;

}
int findTilt(struct TreeNode* root) {
    int tilt = 0;

    dfs(root,&tilt);

    return tilt;
}

/*
563. Binary Tree Tilt

solved using recursive dfs to calculate subtree sums  

Runtime
0
ms
Beats
100.00%
Memory
14.24
MB
Beats
62.50%

*/