/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


void dfs(struct TreeNode* root, char* path, char** result, int* returnSize){

    if(!root) return;

    char currentPath[1000];

    if(strlen(path) == 0) sprintf(currentPath,"%d", root->val);
    else sprintf(currentPath,"%s->%d",path,root->val);

    if(!root->left && !root->right){
        
        result[*returnSize] = malloc(strlen(currentPath) + 1);
        strcpy(result[*returnSize],currentPath);
        (*returnSize)++;
        return;
    }

    dfs(root->left, currentPath, result, returnSize);
    dfs(root->right, currentPath, result, returnSize);
    



    

}

char** binaryTreePaths(struct TreeNode* root, int* returnSize) {
    
    *returnSize = 0;

    char** result = malloc(100*sizeof(char*));

    dfs(root, "", result, returnSize);

    return result;

}

/*
257. Binary Tree Paths
Runtime
0
ms
Beats
100.00%
Memory
11.52
MB
Beats
27.55%

*/