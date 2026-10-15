/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */




void inorder(struct TreeNode* root, int* arr, int* index){
    if(root == NULL) return;

    inorder(root->left, arr,index);
        if(root->left == NULL && root->right == NULL){
            arr[(*index)++] = root->val;
        }
    inorder(root->right,arr,index);
}
bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    
    int arr1[200];
    int arr2[200];

    int index1 = 0;
    int index2 = 0;

    inorder(root1,arr1,&index1);
    inorder(root2,arr2,&index2);

    if(index1 != index2) return false;

    for(int i = 0; i < index1; i++){
        if(arr1[i] != arr2[i]) return false;
    }
    return true;

}

/*
Runtime
0
ms
Beats
100.00%
Memory
9.90
MB
Beats
94.59%

*/