/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */



struct TreeNode* searchBST(struct TreeNode* root, int val) {

    if(!root) return NULL;

    if(root->val == val) return root;

    else if(root->val > val) return searchBST(root->left,val);

    else return searchBST(root->right,val);


}

/*
700. Search in a Binary Search Tree
Runtime
0
ms
Beats
100.00%
Memory
19.44
MB
Beats
63.45%

*/