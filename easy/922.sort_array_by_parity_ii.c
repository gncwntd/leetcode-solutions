/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize*sizeof(int));

    int even = 0;
    int odd = even+1; 
    
    for(int i = 0; i < numsSize; i++){
        if(nums[i] % 2 == 0){
            result[even] = nums[i];
            even+=2;
        }else{
            result[odd] = nums[i];
            odd+=2;
        }
    }


    return result;


}
/*
922. Sort Array By Parity II
Runtime
0
ms
Beats
100.00%
Memory
18.71
MB
Beats
21.72%
*/