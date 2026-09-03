/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool mirror(struct TreeNode* node1, struct TreeNode* node2){
    
    if(node1 == NULL && node2 == NULL) return true;

    if(node1 == NULL || node2 == NULL) return false;

    if(node1->val != node2->val) return false;




    return mirror(node1->left,node2->right) && mirror(node1->right, node2->left);
}

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL) return false;

    return mirror(root->left,root->right);
}

/**Runtime
0
ms
Beats
100.00%
Memory
10.89
MB
Beats
70.04%
*/