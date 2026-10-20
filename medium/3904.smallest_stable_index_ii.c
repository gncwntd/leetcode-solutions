int firstStableIndex(int* nums, int numsSize, int k) {
    
    if(1 == numsSize) return 0;

    int prefMax[numsSize];
    int suffMin[numsSize];

    prefMax[0] = nums[0];
    for(int i = 1; i < numsSize;i++){
        prefMax[i] = prefMax[i - 1] > nums[i] ? prefMax[i - 1] : nums[i];
    }

    suffMin[numsSize-1] = nums[numsSize-1];
    for(int i = numsSize - 2; i >= 0; i--){
        suffMin[i] = suffMin[i + 1] < nums[i] ? suffMin[i + 1] : nums[i];
    }

    for(int i = 0; i < numsSize; i++){
        if(prefMax[i] - suffMin[i] <= k) return i;
    }
    
    return -1;

}   

/*
3904. Smallest Stable Index II
Runtime
6
ms
Beats
61.96%
Memory
22.28
MB
Beats
97.83%
