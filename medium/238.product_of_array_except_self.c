/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    
    int* arr = (int*)malloc(numsSize * sizeof(int));

    int product = 1;


    //left
    for(int i = 0; i < numsSize; i++){        
        arr[i] = product;
        product *= nums[i];
    }
    
    product = 1;
    
    //right
    for(int i = numsSize - 1; i >= 0; i--){
        arr[i] *= product;
        product *= nums[i];
    }





    *returnSize = numsSize;



    return arr;



}

/*
Runtime
0
ms
Beats
100.00%
Memory
31.02
MB
Beats
26.15%
*/