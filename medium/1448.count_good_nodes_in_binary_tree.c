/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int traversal(struct TreeNode* root,int max){

    if(root == NULL) return 0;

    int count = 0;
    
    if(root->val >= max){
        count = 1;
        max = root->val;
    }

    count += traversal(root->left, max);
    count += traversal(root->right, max);

    return count;
}

int goodNodes(struct TreeNode* root){
    
    if(root == NULL) return 0;
    return traversal(root, root->val);


}

/*Runtime
62
ms
Beats
96.06%
Memory
42.13
MB
Beats
25.98%*/

