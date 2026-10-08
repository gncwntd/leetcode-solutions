/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    
    *returnSize = 0;
    int* result = (int*)malloc(numsSize*sizeof(int)); 
    
    int count = 0;

    for(int i = 0; i < numsSize; i++){
        int n = abs(nums[i]);
        if(nums[n-1] < 0){
            result[count++] = n;
        }else{
            nums[n-1] = -nums[n-1];
        }
    }
    *returnSize = count;
    return result;
}

/*
442. Find All Duplicates in an Array
Runtime
0
ms
Beats
100.00%
Memory
25.03
MB
Beats
53.47%

*/