int longestOnes(int* nums, int numsSize, int k) {
    int maxlen = 0, len = 0;
    int count = 0;
    int left = 0, right = 0;


    for(;right < numsSize; right++){
        if(nums[right] == 0){
            count++;
        }
        if(count > k){
            if(nums[left] == 0) count--;
            left++;
        }else{
            len = right + 1 - left;

            if(len > maxlen) maxlen = len;
        }
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
14.29
MB
Beats
85.69%
*/