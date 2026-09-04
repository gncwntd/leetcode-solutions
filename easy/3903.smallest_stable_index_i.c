int firstStableIndex(int* nums, int numsSize, int k) {
    
    for(int i = 0; i < numsSize; i++){

        int max = nums[0];
        int min = nums[i];

        for(int j = 0; j <= i; j++){
            if(nums[j] > max) max = nums[j];
        }

        for(int j = i; j <= numsSize; j++){
            if(nums[j] < min) min = nums[j];
        }

        

    }

}

/*
3903. Smallest Stable Index I
Runtime
0
ms
Beats
100.00%
Memory
9.89
MB
Beats
96.88%
*/