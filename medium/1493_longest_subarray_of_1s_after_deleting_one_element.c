int longestSubarray(int* nums, int numsSize) {

    int maxlen = 0, len = 0;
    int left = 0, right = 0;
    int count = 0;

    for(;right < numsSize; right++){
        if(nums[right] == 0){
            count++;
        }
        while(count > 1){
            if(nums[left] == 0) count--;
            left++;
        }
            len = right  - left;
            if(len > maxlen) maxlen = len;
        
        
    }
    return maxlen;

}
/*
Runtime
0
ms
Beats
100.00%
Memory
14.22
MB
Beats
33.82%*/