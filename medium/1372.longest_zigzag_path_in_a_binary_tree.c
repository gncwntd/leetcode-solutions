/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int dfs(struct TreeNode* root,int left,int steps, int* max_steps){

    if(root == NULL) return 0;

    if(steps > *max_steps) *max_steps = steps;

    if(left){
        dfs(root->right,0,steps+1,max_steps);
        dfs(root->left,1,1,max_steps);
    }else{
        dfs(root->left,1,steps+1,max_steps);
        dfs(root->right,0,1,max_steps);
        
    }


    return *max_steps;

}
int longestZigZag(struct TreeNode* root) {

    int max = 0;
    if (root == NULL) return 0;
    int a = dfs(root->left,1,1,&max);
    int b = dfs(root->right,0,1,&max);
    return  a > b ? a : b; 

}

/*
1372. Longest ZigZag Path in a Binary Tree
Runtime
0
ms
Beats
100.00%
Memory
56.48
MB
Beats
40.00%*/