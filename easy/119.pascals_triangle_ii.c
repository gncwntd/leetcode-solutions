/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {

    int* arr = malloc((rowIndex+1) * sizeof(int));

    arr[0] = 1;

    for(int i = 0; i <= rowIndex;i++){
        arr[i] = 1;
        for(int j = i-1; j>0; j--){
            arr[j] = arr[j-1] + arr[j]; 
        }
    }
    *returnSize = rowIndex + 1;

    return arr;
}
/*
119. Pascal's Triangle II
Runtime
0
ms
Beats
100.00%
Memory
9.25
MB
Beats
31.68%
*/