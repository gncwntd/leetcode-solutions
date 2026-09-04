/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool hasPathSum(struct TreeNode* root, int targetSum) {

    if(root == NULL) return false;

    if(root->left == NULL && root->right == NULL){
        return root->val == targetSum;
    }

    targetSum -= root->val;

    return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);

}

/*Runtime
0
ms
Beats
100.00%
Memory
12.16
MB
Beats
79.97%
*/