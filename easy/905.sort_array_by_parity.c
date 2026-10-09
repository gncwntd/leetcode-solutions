/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;    
    int* result = (int*)malloc(numsSize*sizeof(int));

    int i = 0;
    int k = 0;
    int j = numsSize-1;
    while(i < numsSize){
        if(nums[i] % 2 == 0){
            result[k] = nums[i];
            k++;
        }
        if(nums[i] % 2 != 0){
            result[j] = nums[i];
            j--;
        }
        i++;
    }

    return result;

}

/*
905. Sort Array By Parity
Runtime
0
ms
Beats
100.00%
Memory
14.42
MB
Beats
27.11%
*/