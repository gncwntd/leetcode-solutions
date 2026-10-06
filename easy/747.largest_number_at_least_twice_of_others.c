int dominantIndex(int* nums, int numsSize) {
    
    int max = nums[0];
    int index = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > max){
            max = nums[i];
            index = i;
        }
    }
    for(int i = 0; i < numsSize; i++){
        if(i != index && nums[i]*2 > max) return -1;
    }
    return index;
}
/*
747. Largest Number At Least Twice of Others
Runtime
0
ms
Beats
100.00%
Memory
8.91
MB
Beats
4.03%
*/